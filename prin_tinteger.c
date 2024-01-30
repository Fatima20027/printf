#include "main.h"

/**
 * printinteger - Prints an integer to the standard output.
 * @number: The integer to be printed
 *
 * Return: The number of characters are printed
 */

int printinteger(int number)
{
	int charactCt = 0;
	char digit;

	if (number < 0)
	{
		charactCt += write(1, "-", 1);
		number = -number;
	}
	if (number == INT_MIN)
	{
		charactCt += write(1, "2147483648", 10);
		return (charactCt);
	}
	if (number / 10 != 0)
	{
		charactCt += printinteger(number / 10);
	}
	digit = '0' + number % 10;
	charactCt += write(1, &digit, 1);
	return (charactCt);
}
