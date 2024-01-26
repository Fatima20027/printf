#include "main.h"

/**
 * _putchar - Writes a character to stdout
 * @c: The character to be written
 *
 * Return: 1. success. -1 is returned error.
 */

void _putchar(char c)
{
	write(1, &c, 1);
}

