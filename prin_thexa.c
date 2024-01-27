#include "main.h"

int printhexd(unsigned int number, int base, int uppercase)
{
	int characterCtr = 0;

	char hexCharacters[] = "0123456789abcdef";

	char hexaDigit;

	if (uppercase == True)
	{
		hexCharacters[10] = 'A';
		hexCharacters[11] = 'B';
		hexCharacters[12] = 'C';
		hexCharacters[13] = 'D';
		hexCharacters[14] = 'E';
		hexCharacters[15] = 'F';
	}

	if (number / 10 != 0)
		characterCtr += printhexd(number / 10, base, uppercase);

	hexaDigit = hexCharacters[number % base];

	characterCtr += write(1, &hexDigit, 1);

	return (characterCtr);
}
