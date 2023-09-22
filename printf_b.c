#include "main.h"
/**
 * printf_b - convert decemal to binary
 * @args: the decemal value
 * Return: number of bytes that printed
 */
int printf_b(va_list args)
{
	int j = 0;
	int place;
	int i;
	int bin[32];
	i = va_arg(args, int);
	
	if (i == 0)
	{
		_putchar('0');
		return (0);
	}
	while (i > 0)
	{
		bin[j] = i % 2;
		i /= 2;
		/*place *= 10;*/
		j++;
	}
	place = j;

	while (place >= 0)
	{
		_putchar(bin[place] + '0');
		place--;
	}

	return (j);
}
