#include "main.h"

/**
* printstring - strings are printed to stdout
* @string: The string to be printed
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
		characterCtr += write(1, string, 1);
		++string;
	}
	return (characterCtr);
}
