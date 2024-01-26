#include "main.h"

int printstring(char *s)
{
	int characterCtr = 0;

	while (*s != '\0')
	{
		printchr((int)*s);
		++characterCtr;
		++s;
	}

	return (characterCtr);
}
