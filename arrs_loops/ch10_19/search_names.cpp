#include <iostream>
#include <string>

int main()
{
	constexpr std::string_view names[]{ "Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly" };
	
	std::string name{};
	std::cout << "Enter a name: ";
	std::cin >>  name;
	std::cout << '\n';
	
	bool is_here{ false };


	for (const auto element: names)
	{
		if (element == name)
		{
			is_here = true;
			break;
		}
	}

	if (is_here)
	{
		std::cout << name << " was found." << '\n';
	}
	else
	{
		std::cout << name << " was not found." << '\n';
	}

	return 0;

}

