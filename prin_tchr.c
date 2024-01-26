#include "main.h"

int printchr(int c)
{
	return (write(1, &c, 1));
}
