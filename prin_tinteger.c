#include "main.h"

/**
 * printinteger - Prints an integer to stdout
 * @number: The integer to be printed
 *
 * Return: The number of characters printed
 */

int printinteger(int number)
{
	int characterCtr = 0;
	char digit;

	if (number < 0)
	{
		characterCtr += write(1, "-", 1);
		number = -number;
	}
	if (number == INT_MIN)
	{
		characterCtr += write(1, "2147483648", 10);
		return (characterCtr);
	}
	if (number / 10 != 0)
	{
		characterCtr += printinteger(number / 10);
	}
	digit = '0' + number % 10;
	characterCtr += write(1, &digit, 1);
	return (characterCtr);
}
