#include "main.h"

int printrot(char *string)
{
	int characterCtr = 0;

	while (*string != '\0')
	{
		char base;

		if ((*string >= 'a' && *string <= 'z') || (*string >= 'A' && *string <= 'Z'))
		{
			base = (*string >= 'a' && *string <= 'z') ? 'a' : 'A';
			characterCtr += write(1, &(((13 + *string - base) % 26) + base), 1);
		}
		else
		{
			characterCtr += write(1, string, 1);
		}

		++string;
	}

	return (characterCtr);
}
