#include "main.h"
/**
 * printf_c - prints character
 * @args: char that passes to func
 * Return: 1
 */
int printf_c(va_list args)
{	
	char c = (char)va_arg(args, int);

	write(1, &c, 1);
	return (1);
}
