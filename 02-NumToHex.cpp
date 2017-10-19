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
		switch (h)
		{
			case 15:
				letter = 'F';
				break;
			case 14:
				letter = 'E';
				break;
			case 13: 
				letter = 'D';
				break;
			case 12:
				letter = 'C';
				break;
			case 11:
				letter = 'B';
				break;
			case 10:
				letter = 'A';
				break;
			default:
				letter = h+48;
		}
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
