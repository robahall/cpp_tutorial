#include <iostream>
#include <algorithm> // std::sort
#include <string>

int main()
{	
	// Ask the user how many names they wish to enter
	
	int num_names{};
	std::cout << "How many names would you like to enter? ";
	std::cin >> num_names;
	std::cout << '\n';

	// Dynamically allocate a std::string array
	auto* array{ new std::string[num_names]{} };
	
	// Ask the user to enter each name
	for (int person{ 0 }; person < num_names; ++person)
	{
		std::cout << "Enter name #" << person+1 << ": ";
		std::getline(std::cin >> std::ws, array[person]);
	}	

	// Calls std::sort to sort the names
	std::sort(array, array+num_names);
	
	std::cout << '\n' <<"Here is your sorted list:"<<'\n';

	// Prints the sorted names
	for (int name{0}; name < num_names; ++name)
	{
		std::cout<< "Name #"<<name +1 <<": "<<array[name] << '\n';
	}

	delete[] array;

	return 0;
}
