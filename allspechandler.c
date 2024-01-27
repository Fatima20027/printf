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

	if (specifier == 'c')
		characterCtr += printchr(va_arg(hoho, int));
	else if (specifier == 's')
		characterCtr += printstring(va_arg(hoho, char*));
	else if (specifier == '%')
		characterCtr += printchr((int)'%');
	else if (specifier == 'i' || specifier == 'd')
		characterCtr += printinteger(va_arg(hoho, int));
	else if (specifier == 'u')
		characterCtr += printun(va_arg(hoho, unsigned int));
	else if (specifier == 'x' || specifier == 'X')
		characterCtr += printhexd(va_arg(hoho, unsigned int), 16, (specifier == 'X');

	return (characterCtr);

}
