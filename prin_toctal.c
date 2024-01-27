#include "main.h"

/**
* printoct - generates an octal formatted unsigned integer.
* @number: The number to be printed
*
* Return: The number of printed characters
*/

int printoct(unsigned int number)
{
	int characterCtr = 0;

	char octaldigit;

	if (number / 8 != 0)
		characterCtr += printoct(number / 8);

	octaldigit = '0' + number % 8;

	characterCtr += write(1, &octaldigit, 1);

	return (characterCtr);
}
