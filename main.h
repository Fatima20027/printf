#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <stdint.h>
#include <inttypes.h>
#include <assert.h>

void _putchar(char c);
int _printf(const char *format, ...);
int allspechandler(char specifier, va_list hoho);
int printchr(int c);

#endif

