/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 13:32:48 by ctacconi          #+#    #+#             */
/*   Updated: 2025/03/19 14:23:21 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>

# define WRONG_NUMBER_PARAM "Error: The program takes three parameters: <filename> <string1> <string2>"
# define VALID_PARAM "Error: The program needs three valid parameters"
# define NOT_OPEN "Error: Could not open file: "
# define EMPTY_FILE "Error: The file is empty or could not be read."
# define ERR_CREATE_FILE "Error: Could not create output file: "
# define ERR_WRITE_FILE "Error: Failed to write to output file: "


void printErrorExit(const char* message, const std::string& arg = "")
{
	std::cerr << message << arg << std::endl;
	exit(EXIT_FAILURE);
}

void replaceStrings(std::string& result, const std::string& fileContent, const std::string& s1, const std::string& s2)
{
	size_t idx = 0;
	size_t foundIdx;
	result.clear();

	while (idx < fileContent.length())
	{
		foundIdx = fileContent.find(s1, idx);
		if (foundIdx == std::string::npos)
		{
			result += fileContent.substr(idx);
			break;
		}
		else if (foundIdx == idx)
		{
			result += s2;
			idx += s1.length();
		}
		else
		{
			result += fileContent[idx];
			idx++;
		}
	}
}

std::string readFile(std::ifstream& inFile)
{
	std::string content;
	std::string line;
	bool lastNewline = false;

    while (std::getline(inFile, line))
    {
        content += line;
        lastNewline = (inFile.peek() != EOF);
        if (lastNewline)
            content += '\n';
    }
    if (!lastNewline && !content.empty() && inFile.eof())
    {
		content += '\n';
	}
	return (content);
}

void createOutFile(std::string& filename, std::string& result)
{
	std::string outputFilename;
	outputFilename = filename + ".replace";
	std::ofstream outFile(outputFilename.c_str());

	if (!outFile.is_open())
		printErrorExit(ERR_CREATE_FILE, outputFilename);

	outFile << result;
	if (outFile.fail())
		printErrorExit(ERR_WRITE_FILE);

	outFile.close();
}

int main(int argc, char **argv)
{
	std::string fileContent;
	std::string result;

	if (argc != 4)
		printErrorExit(WRONG_NUMBER_PARAM);

	if (argv[1][0] == '\0' || argv[2][0] == '\0' || argv[3][0] == '\0')
		printErrorExit(VALID_PARAM);

	std::ifstream inFile(argv[1]);
	if (!inFile.is_open())
		printErrorExit(NOT_OPEN, argv[1]);

	fileContent = readFile(inFile);
	inFile.close();
	
	if (fileContent.empty())
		printErrorExit(EMPTY_FILE);

	replaceStrings(result, fileContent, argv[2], argv[3]);
	
	std::string filename(argv[1]);
	createOutFile(filename, result);

	return (EXIT_SUCCESS);
}
