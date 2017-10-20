#include <iostream>
#include <string>

bool pcheck(std::string str)
{
	for ( int i = 0; i < (str.size() / 2) ; i++ )
	{
		if ( str.at(i) != str.at(str.size() - 1 - i) )
		{
			return false;
		}
	}
	
	return true;	
}

int main()
{
	std::string str;
	
	std::cout << "Enter a palindrome: ";
	std::cin >> str;
	
	if ( pcheck(str) )
	{
		std::cout << "That is a palindrome!" << std::endl;
	}
	else
	{
		std::cout << "That's no palindrome!" << std::endl;
	}
	
	return 0;
}
