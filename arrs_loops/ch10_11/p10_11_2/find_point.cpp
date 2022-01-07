#include <iostream>
#include <iterator>

int* find(int* arr_begin, int* arr_end, int value)
{

	for (int* ptr{arr_begin}; ptr != arr_end; ++ptr)
	{
		if(*(ptr) == value)
			return ptr;
	
	}
	return arr_end;

}



int main()
{
	int arr[]{ 2, 5, 6, 10, 8, 20, 16, 40 };

	//Search for the first element with value 20.
	int* found { find(std::begin(arr), std::end(arr), 20) };
	
	// If an element with value 20 was found, print it.
	if (found != std::end(arr))
	{
		std::cout << *found << '\n';
	}

	return 0;
	
}

