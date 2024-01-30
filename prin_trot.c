#include "main.h"

/**
 * printrot - Rotates the character by 13 positions.
 * @string: The string to be handled.
 *
 * Return: The number of printed characters.
 */

int printrot(char *string)
{

	int charactCt = 0;

	while (*string != '\0')
	{
		char base;

		if ((*string >= 'a' && *string <= 'z') || (*string >= 'A' && *string <= 'Z'))
		{
			char rotatedChar;

			base = (*string >= 'a' && *string <= 'z') ? 'a' : 'A';
			rotatedChar = ((13 + *string - base) % 26) + base;

			charactCt += write(1, &rotatedChar, 1);
		}
		else
		{
			charactCt += write(1, string, 1);
		}

		++string;
	}

	return (charactCt);
}
