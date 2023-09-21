#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

int printf_b(va_list args);
int printf_s(va_list args);
int printf_int(va_list args);
int _putchar(char c);
int _printf(const char *format, ...);

#endif /* MAIN_H */
