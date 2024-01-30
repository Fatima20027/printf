#include "main.h"

/**
* printhexd - Prints a number's hexadecimal form.
* @number: The number to be printed in hexadecimal
* @base: the basis of the number system, which is normally 16 in hexadecimal
* @uppercase: A flag indicates if uppercase letters (1) or (0) should be used
* Return: The number of characters printed
*/

int printhexd(unsigned int number, int base, int uppercase)
{
	int charactCt = 0;

	char hexCharacters[] = "0123456789abcdef";

	char hexaDigit;

	if (uppercase)
	{
		hexCharacters[10] = 'A';
		hexCharacters[11] = 'B';
		hexCharacters[12] = 'C';
		hexCharacters[13] = 'D';
		hexCharacters[14] = 'E';
		hexCharacters[15] = 'F';
	}

	if (number / 10 != 0)
		charactCt += printhexd(number / 10, base, uppercase);

	hexaDigit = hexCharacters[number % base];

	charactCt += write(1, &hexaDigit, 1);

	return (charactCt);
}
