#include <iostream>

int main()
{
	std::cout << "Enter a single character: ";
	char my_char{}; 
	std::cin >> my_char;

	std::cout << "You entered: '" << my_char << "',  which has ASCII code: " << static_cast<int>(my_char) << ". \n";
	
	return 0;
}

