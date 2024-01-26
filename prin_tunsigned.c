#include "main.h"

int printun(unsigned int number)
{
	int characterCtr = 0;
	char digit;

	if (number / 10 != 0)
	{
		characterCtr += printun(number / 10);
	}

	digit = '0' + number % 10;

	characterCtr += write(1, &digit, 1);
	return (characterCtr);
}
