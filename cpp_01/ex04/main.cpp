#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>


void replaceStrings(std::string& result, const std::string& fileContent, const std::string s1, std::string s2)
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


std::string readFile(const std::string file)
{
	std::string content;
	std::string line;
	
	std::ifstream inFile(file); //open?
	if (!inFile.is_open())
	{
		std::cerr << "Error: Could not open file: " << file << std::endl;
		return ("");
	}
	while (std::getline(inFile, line))
	{
		content += line;
		if (inFile.peek() != EOF)// Añadir salto de línea solo si no es el final del archivo
            content += '\n';
	}
	inFile.close();
	return (content);
}

int main(int argc, char **argv)
{
	std::string fileContent;
	std::string result;

	if (argc != 4)
	{
		std::cerr << "Error: The program takes three parameters: <filename> <string1> <string2>." << std::endl;
		return (EXIT_FAILURE);
	}	
	if (argv[1][0] == '\0' || argv[2][0] == '\0' || argv[3][0] == '\0')
	{
		std::cerr << "Error: The program needs three valid parameters." << std::endl;
		return (EXIT_FAILURE);
	}
	fileContent = readFile(argv[1]);
	if (fileContent.empty())
	{
		std::cerr << "Error: The file is empty or could not be read." << std::endl;
		return (EXIT_FAILURE);
	}
	replaceStrings(result, fileContent, argv[2], argv[3]);
	std::cout << result << std::endl;
	return (EXIT_SUCCESS);
}
