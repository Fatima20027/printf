#include "main.h"

int printrot13(char *string)
{
	int characterCtr = 0;

	char base;

	while (*string != '\0')
	{
		if ((*string >= 'a' && *s <= 'z') || (*string >= 'A' && *strning <= 'Z'))
		{
			base = (*string >= 'a' && *string <= 'z') ? 'a' : 'A';
			characterCtr += write(1, &(((13 + *string - base) % 26) + base), 1);
		}
		else
		{
			characterCtr += write(1, s, 1);
		}

		++string;
	}

	return (characterCtr);
}
