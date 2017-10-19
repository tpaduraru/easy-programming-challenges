#include <iostream>
#include <string>

int main()
{
	unsigned int num;
	
	std::cout << "Enter the length of the password: ";
	std::cin >> num;
	std::cout << "Your password is: " << rand_pass() << std::endl;
	
	return 0;
}
