#include "main.h"

/**
 * allspechandler - Handles a specific specifier
 * @specifier: The specifier character
 * @hoho: The va_list containing the argument
 *
 * Return: The number of characters processed
 */

int allspechandler(char specifier, va_list hohoss)
{
	int charactCt = 0;

	if (specifier == 'c')
		charactCt += printchr(va_arg(hohoss, int));
	else if (specifier == 's')
		charactCt += printstring(va_arg(hohoss, char *));
	else if (specifier == '%')
		charactCt += printchr((int)'%');
	else if (specifier == 'i' || specifier == 'd')
		charactCt += printinteger(va_arg(hohoss, int));
	else if (specifier == 'u')
		charactCt += printun(va_arg(hohoss, unsigned int));
	else if (specifier == 'x' || specifier == 'X')
		charactCt += printhexd(va_arg(hohoss, unsigned int), 16, (specifier == 'X'));
	else if (specifier == 'o')
		charactCt += printoct(va_arg(hohoss, unsigned int));
	else if (specifier == 'r')
		charactCt += printrev(va_arg(hohoss, char*));
	else if (specifier == 'R')
		charactCt += printrot(va_arg(hohoss, char*));
	else if (specifier == 'b')
		charactCt += printbin(va_arg(hohoss, unsigned int));
	else
		charactCt += write(1, &specifier, 1);

	return (charactCt);
}
