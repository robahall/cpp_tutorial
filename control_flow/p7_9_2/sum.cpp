#include <iostream>

int sumTo(int value)
{	
	int sum_val {};
	for (int count{ 0 }; count <=value; ++count)
		sum_val += count;
	return sum_val;	
}



int main()
{	
	int value{};
	std::cout << "Choose a number: ";
	std::cin >>value;
	std::cout << "Value is: " << sumTo(value);
	return 0;
}

