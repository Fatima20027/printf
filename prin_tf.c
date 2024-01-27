#include "main.h"

/**
 * _printf - Outputs formatted print to the standard output stream (stdout)
 * @format: A character string containing format specifiers
 *
 * Return: The number of printed characters
 */

int _printf(const char *format, ...)
{
	int characterCtr;

	va_list hoho;

	va_start(hoho, format);

	if (format == NULL)
		return (-1);

	characterCtr = 0;


	while (*format != '\0')
	{
		if (*format == '%')
		{
			characterCtr += allspechandler(*(++format), hoho);
		}
		else
		{
			characterCtr += write(1, format, 1);
		}
		++format;
	}

	++characterCtr;

	va_end(hoho);

	return (characterCtr);
}
