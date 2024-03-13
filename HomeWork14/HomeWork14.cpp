
#include <iostream>
#include<string>

int main()
{
	std::string Name = "";

	std::cout << "Enter string: ";

	std::getline(std::cin, Name);
	
	if (Name.size() == 0) return 0;

	std::cout << "Lenght: " << Name.length() << std::endl;
	std::cout << "First character: " << Name[0] << std::endl;
	std::cout << "End character: " << Name[Name.size() - 1] << std::endl;

	return 0;
}
