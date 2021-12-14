#include <iostream>






bool passOrFail()
{
	static int count{3};
	--count;
	return (count>=0);

}


int main()
{
	std::cout << "User #1: " << (passOrFail() ? "Pass\n" : "Fail\n");
	std::cout << "User #2: " << (passOrFail() ? "Pass\n" : "Fail\n");
	std::cout << "User #3: " << (passOrFail() ? "Pass\n" : "Fail\n");
  	std::cout << "User #4: " << (passOrFail() ? "Pass\n" : "Fail\n");
	return 0;
}

