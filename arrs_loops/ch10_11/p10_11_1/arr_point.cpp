#include <iostream>

int main()
{
	int arr[]{ 1, 2, 3 };
	std::cout<< arr[2] << '\n';
	std::cout<< *(arr+2) << '\n';
	std::cout<< *(2+arr) << '\n'; 
	std::cout<< 2[arr] << '\n';
	return 0;
}
