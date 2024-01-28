#include "main.h"

/**
* printstring - strings are printed to stdout
* @s: The string to be printed
*
* Return: Number of characters printed
*/

int printstring(char *string)
{
	int characterCtr = 0;

	if (string == NULL)
		return (puts("(null)"));
	while (*string)
	{
		printchr((int)*string);
		++characterCtr;
		++string;
	}
	return (characterCtr);
}
