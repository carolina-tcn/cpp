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


std::string* readFile(std::string file)
{
	std::ifstream inFile(file); //open?
	if (!) //no se abre
		//exit

	while (getline(MyReadFile, txt_file))
	{
		std::cout << txt_file;
		std::cout << "\n";
	}
	std::cout << "el arg1 contiene: " << txt_file << std::endl;
	MyReadFile.close();
}


//string:: length, substr, find, append, copy
int main(int argc, char **argv)
{
	if (argc != 4)
		return (std::cerr << "The program takes three parameters: <filename> <string1> <string2>." << std::endl);
		
	if (!(*argv[1] && *argv[2] && *argv[3]))
		return (std::cerr << "The program needs three valid parameters." << std::endl);

	fileContent = readFile(*argv[1]);
	if (!fileContent)
		return (std::cerr << "The file is empty" << std::endl);
	
	return (EXIT_SUCCESS);
}
