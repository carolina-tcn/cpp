#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>

/*REPLACE_STRINGS_FUNCTION
{
	std::string s1
	std::string s2
	s1 = argv[2];
	s1 = argv[3];
}*/


std::string readFile(const std::string file)
{
	std::string content;
	std::string line;
	
	std::ifstream inFile(file); //open?
	if (!inFile.is_open())
	{
		std::cerr << "Error: Could not open file." << file << std::endl;
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
	std::cout << fileContent << std::endl;
	//Replace s1 with s2
	return (EXIT_SUCCESS);
}

