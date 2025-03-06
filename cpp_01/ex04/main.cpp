#include <string>
#include <iostream>
#include <fstream>


//string:: length, substr, find, append, copy
int main(int argc, char **argv)
{
	std::string txt_file;
	std::string s1;
	std::string s2;
	
	if (argc != 4)
	{	std::cerr << "The program takes three parameters: filename, string1 and string2." << std::endl;
		return (1);
	}
	if (!(*argv[1] && *argv[2] && *argv[3]))
	{
		std::cerr << "The program needs three valid parameters." << std::endl; 
		return (1);
	}
	s1 = argv[2];
	s1 = argv[3];
	
	std::ifstream MyReadFile(argv[1]);
	while (getline(MyReadFile, txt_file))
		std::cout << txt_file;
	MyReadFile.close();


	return (0);
}
