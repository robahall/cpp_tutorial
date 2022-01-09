#include <iostream>
#include <array>
#include <string>
#include <numeric>


enum Item
{
	health_potion,
	torch,
	arrows
};

void count_total_items(const std::array<int, 3>& backpack)
{
	std::cout << "Total items in backpack: " <<std::reduce(backpack.begin(), backpack.end()) << '\n';
}

std::string get_item_name(Item item)
{
	
	switch(item)
	{
		case health_potion:
			return "health potion";
		case torch:
			return "torch";
		case arrows:
			return "arrows";
	}
	return "???";
}


void count_specific_item(const std::array<int, 3>& backpack, Item item)
{
	std::cout << "There are " << backpack[item] << " " << get_item_name(item) << "\n";
}


int main()
{
	std::array<int, 3> backpack{ 2, 5, 10};
	
	Item item{torch};

	count_total_items(backpack);
	count_specific_item(backpack, torch);


	return 0;
}

