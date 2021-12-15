#include <iostream>

int calculate(int value_1, char operation, int value_2)
{

	int num_operation;
	num_operation = (int)(operation);

	switch(num_operation)
	{
		case 43:
			// 43 == +
			return value_1 + value_2;
		case 45:
			// 45 == -
			return value_1 - value_2;
			
		case 42:
			// 42 == *
			return value_1 * value_2;		
		case 47:
			// 47 == //
			return value_1 / value_2;
		default:
			std::cout << "Unknown operator";
			return	0;
				
	}

}

int main()
{
	//enter a number
	std::cout << "Enter an integer: ";		
	int value_1{};
	std::cin >> value_1;
	//enter an operator
	std::cout << "Enter a math operator from {+, -, *, /): ";
	char operation{};
	std::cin >> operation;
	//enter a number
	std::cout << "Enter another integer: ";
	int value_2{};
	std::cin >> value_2;
	//calculate
	std::cout << calculate(value_1, operation, value_2) << "\n";
	//return value

	return 0;
};

