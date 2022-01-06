#include <iostream>
#include <limits>
#include <iterator>

int get_value()
{
	int user_value{};

	while (true)
	{	
		std::cout << "Enter a number between 1 and 9:";
		std::cin >> user_value;
	
		if (std::cin.fail())
		{
			std::cin.clear(); //reset error flags
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else if (user_value < 1 || user_value > 9)
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		else
		{
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			return user_value;
		}
	}
}
	



int main()
{
	constexpr int array[]{ 4, 6, 7, 3, 8, 2, 1, 9, 5};
	int array_size{static_cast<int>(std::size(array)) };
	
	// prompt user for int between 1 and 9
	
	int user_value{};
	user_value = get_value();
	int user_idx{};
	
	for (int arr_idx{0}; arr_idx < array_size; ++arr_idx)
	{
		if (user_value == array[arr_idx])
		{
			
			user_idx = arr_idx;
		}
		std::cout << array[arr_idx] << ' ';
	}
	std::cout << '\n';
	
	std::cout << "The number " << user_value << " has index " << user_idx << ".\n"; 	

	return 0;
}
