#include "main.h"
#include <stdio.h>

/**
 * _printf - Prints to standout
 * @format: the specifier
 * Return: Number of bytes
 */
int _printf(const char *format, ...)
{
	unsigned int i, count = 0;

	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			putchar(format[i]);
		}
		if (format[i + 1] == 'c')
		{
			putchar(va_arg(args, int));
			i++;
		}
		count += 1;
	}
	return (count);
}
