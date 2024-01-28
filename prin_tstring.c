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

	if (s == NULL)
		return (puts("(null)"));
	while (*s)
	{
		printchr((int)*str);
		++characterCtr;
		++s;
	}
	return (characterCtr);
}
