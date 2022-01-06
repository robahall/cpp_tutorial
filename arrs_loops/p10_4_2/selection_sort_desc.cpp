#include <iostream>
#include <iterator>
#include <utility>

int main()
{
	int array[]{ 30, 50, 20, 10, 40 };
	constexpr int length{ static_cast<int>(std::size(array)) };

	for (int startIndex{ 0 }; startIndex < length - 1; ++startIndex)
	{
		//largest index we've encountered this iteration
		int largestIndex{ startIndex };
		
		for (int currentIndex{ startIndex + 1}; currentIndex < length; ++ currentIndex)
		{
			if(array[currentIndex] > array[largestIndex])
			{
				largestIndex = currentIndex;
			}
		}
		std::swap(array[startIndex], array[largestIndex]);


	}
	for (int index{0}; index < length; ++index)
	{
		std::cout << array[index] << ' ';
	}
	std::cout << '\n';

	return 0;
}

