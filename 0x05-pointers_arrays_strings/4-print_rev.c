#include "main.h"
/**
 * print_rev - prints in reverse
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int size = 0;
	int o;

	while (*s != '\0')
	{
		size++;
		s++;
	}
	s--;
	for (o = size; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
