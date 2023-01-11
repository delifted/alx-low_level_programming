#include "main.h"
#include <string.h>

/*
 * _puts_recursion: -> function to print a string
 * @a: first integer
 * @b: second integer
 */

void _puts_recursion(char *s)
{
	int a;
	int b = strlen(s);

	for (a = 0; a < b; a++)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
