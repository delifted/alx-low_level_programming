#include "main.h"
#include <string.h>

/*
 * _puts_recursion - function to print a string using recursive function.
 * @a: first integer
 * @b: second integer
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*(s));
	_puts_recursion(s + 1);
	_putchar('\n');
}
