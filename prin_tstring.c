#include "main.h"

/**
 * printstring - strings are printed to stdout
 * @s: The string to be printed
 *
 * Return: Number of characters printed
 */

int printstring(char *s)
{
	int characterCtr = 0;

	while (*s != '\0')
	{
		printchr((int)*s);
		++characterCtr;
		++s;
	}
	return (characterCtr);
}
