#include <iostream>
#include <string>

std::string dec_to_hex(unsigned int dec)
{
	if (!dec)
		return std::to_string(0);
	
	std::string hex = "";
	
	for (; dec; dec /= 16 )
	{
		int h = dec % 16;
		char letter;
		
		if ( h > 9 )
			letter = h+55;
		else
			letter = h+48;

		hex = letter + hex;
	}
	
	return hex;
}

int main()
{
	unsigned int num;
	
	std::cout << "Enter a number: ";
	std::cin >> num;
	std::cout << num << " in hexadecimal is " << dec_to_hex(num) << std::endl;
	
	return 0;
}
