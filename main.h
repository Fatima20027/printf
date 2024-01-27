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
int printstring(char *s);
int printinteger(int number);
int printun(unsigned int number);
int printhexd(unsigned int number, int base, int uppercase);
int printoct(unsigned int number);
int printrev(char *string);
int printrot(char *string);

#endif

