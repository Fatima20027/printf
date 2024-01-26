#include "main.h"

/**
* printchr - Prints a character into the default output
* @c: The character to be printed
*
* Return: Returns the number of characters printed upon success (1).
* Returns -1 if not.
*/
int printchr(int c)
{
	return (write(1, &c, 1));
}
