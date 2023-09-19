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

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			count++;
		}
		else
		{
		format++;
		if (*format == '\0')
			break;
		if (*format == 'c')
		{
			char c = (char)va_arg(args, int);

			write(1, &c, 1);
			count++;
		}
		else if (*format == 's')
			count += printf_s(args);
		else if (*format == 'd' || *format == 'i')
			count += printf_int(args);
		else if (*format == '%')
		{
			write(1, format, 1);
			count++;
		}
		}
		format++;
	}
	va_end(args);
	return (count);
}
