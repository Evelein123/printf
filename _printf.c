#include "main.h"
/**
 * _printf - A simplified version of printf.
 * @format: Format string with text and specifiers.
 *
 * Writes the format string to stdout,
 * replacing specifiers with additional arguments.
 * Supports 'c' for Character, 's' for String, and '%' for Percent sign.
 *
 * Return: Number of characters printed excluding null byte.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	int i;

	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			count++;
			continue;
		}
		i++;
		if (format[i] == '\0')
			return (-1);
		if (format[i] == 'c')
		{
			char c = (char)va_arg(args, int);

			write(1, &c, 1);
			count++;
		}
		else if (format[i] == 's')
			count += printf_s(args);
		else if (format[i] == 'd' || format[i] == 'i')
			count += printf_int(args);

		else if (format[i] == '%')
		{
			write(1, &format[i], 1);
			count++;
		}
	}
	va_end(args);
	return (count);
}
