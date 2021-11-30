#include <cstdint>
#include <iostream>

int main()
{
	std::cout << "Enter a single character: ";
	char my_char{}; 
	std::cin >> my_char;
	int my_int{my_char};
	std::cout << "You entered: '" << my_char << "',  which has ASCII code: " << my_int  << ". \n";
	
	return 0;
}

