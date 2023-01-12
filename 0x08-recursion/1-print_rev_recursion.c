#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: string
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	char calc;

	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}

