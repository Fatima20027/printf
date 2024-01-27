#include "main.h"

/**
 * printrev - Prints a string in the opposite order
 * @string: The string to be printed
 *
 * Return: The number of characters printed
 */

int printrev(char *string)
{
	int characterCtr = 0, l, i;

	l = 0;

	while (string[l] != '\0')
		l++;

	for (i = l - 1; i >= 0; i--)

		characterCtr += write(1, &string[i], 1);

	return (characterCtr);
}
