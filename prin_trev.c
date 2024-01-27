#include "main.h"

int printrev(char *string)
{
	int characterCtr = 0, l, i;

	l = 0;

	while (string[l] != '\0')
		l++;

	for (i = l - 1; i >= 0; i--)

		characterCtr += write(1, &string[i], 1);

	return (characterCtr);
}
