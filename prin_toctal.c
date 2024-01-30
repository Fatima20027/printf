#include "main.h"

/**
* printoct - Prints an unsigned integer in octal format.
* @number: The number to be printed
*
* Return: The number of printed characters
*/

int printoct(unsigned int number)
{
	int charactCt = 0;

	char octaldigit;

	if (number / 8 != 0)
		charactCt += printoct(number / 8);

	octaldigit = '0' + number % 8;

	charactCt += write(1, &octaldigit, 1);

	return (charactCt);
}
