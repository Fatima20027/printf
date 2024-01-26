#include "main.h"

/**
 * allspechandler - Handles a specific specifier
 * @specifier: The specifier character
 * @hoho: The va_list containing the argument
 *
 * Return: The number of characters processed
 */

int allspechandler(char specifier, va_list hoho)
{
	int characterCtr = 0;

	if (spec == 'c')
		characterCtr += printcharacter(va_arg(hoho), int);
}
