#include "main.h"

/**
 * printbinary - Prints a binary form of an unsigned integer.
 * @number: The number to be printed in binary.
 *
 * Return: The number of characters printed.
 */

int printbinary(unsigned int number)
{
	int characterCtr = 0, index, i;

	char digit;

	if (number == 0)
	{
		characterCtr += write(1, "0", 1);
	}
	else
	{
		char buff[32];

		index = 0;

		while (number > 0)
		{
			digit = '0' + (number % 2);
			buff[index++] = digit;
			number /= 2;
		}
		for (i = index - 1; i >= 0; i--)
		{
			characterCtr += write(1, &buff[i], 1);
		}
	}

	return (characterCtr);
}
