#include <iostream>
#include <cctype>
#include <string>

int main(void)
{
	std::string name;

	std::cout << "What's your name? ";
	std::getline(std::cin, name);

	name[0] = toupper(name[0]);
	for (int i = 1; i < name.length(); i++)
	{
		name[i] = tolower(name[i]);
		if (name[i - 1] == ' ')
		{
			name[i] = toupper(name[i]);
		}
	}

	if (name == "Bob" || name == "Alice")
	{
		std::cout << std::endl << "Hello, " << name << "! I hope you are doing great." << std::endl;
	}
	else
	{
		std::cout << std::endl << "Sorry, " << name << ", I am not supposed to greet you." << std::endl;
	}
	
	return 0;
}
