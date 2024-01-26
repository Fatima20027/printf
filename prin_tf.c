#include "main.h"

int _printf(const char *format, ...)
{
	int characterCtr;

	va_list hoho;

	va_start(hoho, format);

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

	va_end(hoho);

	return (characterCtr);
}
