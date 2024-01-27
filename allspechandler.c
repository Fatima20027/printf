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
	int charactCt = 0;

	if (specifier == 'c')
		charactCt += printchr(va_arg(hoho, int));
	else if (specifier == 's')
		charactCt += printstring(va_arg(hoho, char*));
	else if (specifier == '%')
		charactCt += printchr((int)'%');
	else if (specifier == 'i' || specifier == 'd')
		charactCt += printinteger(va_arg(hoho, int));
	else if (specifier == 'u')
		charactCt += printun(va_arg(hoho, unsigned int));
	else if (specifier == 'x' || specifier == 'X')
		charactCt += printhexd(va_arg(hoho, unsigned int), 16, (specifier == 'X'));
	else if (specifier == 'o')
		charactCt += printoct(va_arg(hoho, unsigned int));
	else if (specifier == 'r')
		charactCt += printrev(va_arg(hoho, char*));
	else
		charactCt += write(1, &specifier, 1);

	return (charactCt);
}
