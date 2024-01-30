#include "main.h"

/**
 * printbin - Prints a binary form of an unsigned integer.
 * @number: The number to be printed in binary.
 *
 * Return: The number of printed characters.
 */

int printbin(unsigned int number)
{
	int charactCt = 0, index, i;

	char digit;

	if (number == 0)
	{
		charactCt += write(1, "0", 1);
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
			charactCt += write(1, &buff[i], 1);
		}
	}

	return (charactCt);
}
