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
	while (*s != '\0')
	{
		characterCtr += write(1, s, 1);
		++s;
	}
	return (characterCtr);
}
