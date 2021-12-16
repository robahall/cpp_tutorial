#include <iostream>

int main()
{
	// asci letters are from 97-122
	int num {97};
	
	while (num<123)
	{
		std::cout << char(num) << " is value: " << int(num) << ".\n";
		++num;
	}
	return 0;
}
