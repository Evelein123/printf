#include "main.h"
/**
 * printf_b - convert decemal to binary
 * @args: the decemal value
 * Return: number of bytes that printed
 */
int printf_b(va_list args)
{
	int i;
	int count = 1;

	i = va_arg(args, int);
	while (i != 0)
	
	{
	if (i % 2 == 0)
	{
		_putchar('0');
		i /= 2;
		count++;
	}
	else if (i % 2 == 1)
	{
		_putchar('1');
		i /= 2;
		count++;
	}
	}
	return (count);
}
