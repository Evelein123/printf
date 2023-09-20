#include "main.h"
/**
 * printf_s - print string
 * @args: arguement to print
 * Return: num of char printted
 */
int printf_s(va_list args)
{
	int strlen = 0;
	char *s;

	s = va_arg(args, char *);
	while (*s != '\0')
	{

		strlen++;
		write(1, s++, 1);
	}
	return (strlen);
}
