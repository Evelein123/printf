#include "main.h"
/**
 * printf_s - prints string
 * @args: arguement to print
 * Return: num of char printted
 */
int printf_s(va_list args)
{
	int strlen = 0;
	char *s;

	s = va_arg(args, char *);
	while (s[strlen] != '\0')
	{
		strlen++;
		write(1, s, strlen);
	}
	return (strlen);
}
