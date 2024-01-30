#include "main.h"

/**
* printstring - strings are printed to stdout
* @string: The string to be printed
*
* Return: Number of characters printed
*/
int printstring(char *string)
{
	int charactCt = 0;

	if (string == NULL)
		return (puts("(null)"));
	while (*string)
	{
		charactCt += write(1, string, 1);
		++string;
	}
	return (charactCt);
}
