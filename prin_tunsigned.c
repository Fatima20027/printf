#include "main.h"

/**
* printun - Prints an unsigned integer
* @number: The number to be printed
*
* Return: The number of characters printed
*/

int printun(unsigned int number)
{
	int charactCt = 0;

	char digit;

	if (number / 10 != 0)
		charactCt += printun(number / 10);

	digit = '0' + number % 10;

	charactCt += write(1, &digit, 1);

	return (charactCt);
}
