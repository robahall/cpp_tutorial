#include <iostream>
#include <iterator> // for std::size
#include <utility>

int main()
{
    int array[]{ 6, 3, 2, 9, 7, 1, 5, 4, 8 };
    constexpr int length{ static_cast<int>(std::size(array)) };    

    //  constexpr int length{ sizeof(array) / sizeof(array[0]) }; // use instead if not C++17 capable

    // Step through each element of the array (except the last, which will already be sorted by the time we get to it)
    for (int iteration{ 0 }; iteration < length-1; ++iteration)
    {
        int endOfArrayIndex{ length - iteration };
	
	bool swapped { false };
	// Search through all elements up to the end of the array - 1
        // The last element has no pair to compare against
        for (int currentIndex{ 0 }; currentIndex < endOfArrayIndex - 1; ++currentIndex)
        {
            // If the current element is larger than the element after it, swap them
            if (array[currentIndex] > array[currentIndex+1])
	    {    
		std::swap(array[currentIndex], array[currentIndex + 1]);
        	swapped = true;
	    }
	}

    

    	if (!swapped)
    	{
	    std::cout<< "Early termination on iteration: " << iteration+1 << '\n';
	    break;
	 }
	}

    
    // Now print our sorted array as proof it works
    for (int index{ 0 }; index < length; ++index)
        std::cout << array[index] << ' ';

    std::cout << '\n';

    return 0;
}
