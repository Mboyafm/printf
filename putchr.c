#include "main.h"

/**
 * putchr - prints a character
 * @c: the character to be printed
 * Return: 1
 */
int putchr(char c)
{
	return (write(1, &c, 1));
}
