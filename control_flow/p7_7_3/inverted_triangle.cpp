#include <iostream>

// Loop between 1 and 5

int main()
{
	int outer{ 5 };
	while (outer >=1)
	{
		//loop between 1 and outer
		int inner{1};
		while (inner <= outer)
		{
			std::cout << inner << ' ';
			++inner;
		}

		//print a new line at the end of each row
		std::cout << '\n';
		--outer;
	}
	return 0;
}

