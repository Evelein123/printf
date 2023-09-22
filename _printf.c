#include "main.h"
/**
 * _printf - A simplified version of printf.
 * @format: Format string with text and specifier
 *
 * Writes the format string to stdout,
 * replacing specifiers with additional argument
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
	while (*format != '\0')
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
			return (-1);
		if (*format == 'c')
			count += printf_c(args);
		else if (*format == 'b')
			count += printf_b(args);
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
	_putchar(count + '0');
	return (count);

}
