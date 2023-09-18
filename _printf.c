#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - A simplified printf.
 * @format: String with text and format specifiers.
 *
 * This function reads the format string and writes to stdout.
 * It supports 'c': Character, 's': String, '%': Percent sign.
 *
 * Return: The number of characters printed (excluding null byte).
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	for (int i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			count++;
			continue;
		}
		i++;
		if (format[i] == 'c')
		{
			char c = (char)va_arg(args, int);

			write(1, &c, 1);
		} else if (format[i] == 's')
		{
			for (char *s = va_arg(args, char *); *s; s++)
				write(1, s, 1);

		} else if (format[i] == '%')
		{
			write(1, &format[i], 1);
		}
		count++;
	}
	va_end(args);
	return (count);
}
