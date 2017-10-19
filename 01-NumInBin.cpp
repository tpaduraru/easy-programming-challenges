#include <iostream>
#include <string>

std::string dec_to_bin(unsigned int dec)
{
	if (!dec)
		return std::to_string(0);
	
	std::string bin = "";
	
	for (; dec; dec /= 2 )
		bin = std::to_string(dec % 2) + bin;
	
	return bin;
}

int main()
{
	unsigned int num;
	
	std::cout << "Enter a number: ";
	std::cin >> num;
	std::cout << num << " in binary is " << dec_to_bin(num) << std::endl;
	
	return 0;
}
