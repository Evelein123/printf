#ifndef _PRINTF_H
#define _PRINTF_H

#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>



int print_percent(va_list ap, params_t *params);
int print_string(va_list ap, params_t *params);
int print_char(va_list ap, params_t *params);
int print_int(va_list ap, params_t *params);
int print_s(va_list ap, params_t *params);




int _printf(const char *format, ...);

#endif /* MAIN_H */
