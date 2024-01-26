#include "main.h"

int printinteger(int number)
{
	int characterCtr = 0;
	char digit = 0;

	if (number < 0)
	{
		_putchar('-');
		number = -number;
	}

	if (num == INT_MIN) 
	{
		characterCounter += write(1, "2147483648", 10);
		return (characterCounter);
    }
	if (num / 10 != 0)
	{
		characterCtr += (printinteger / 10)
	}

	char digit = '0' + num % 10;

	characterCtr += write(1, &digit, 1);

	return (charcterCtr);

}
