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

	va_list hohos;

	va_start(hohos, format);

	if (format == NULL)
		return (-1);

	characterCtr = 0;


	while (*format != '\0')
	{
		if (*format == '%')
		{
			characterCtr += allspechandler(*(++format), hohos);
		}
		else
		{
			characterCtr += write(1, format, 1);
		}
		++format;
	}

	va_end(hohos);

	return (characterCtr);
}
