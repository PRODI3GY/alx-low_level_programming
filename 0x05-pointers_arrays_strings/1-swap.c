#include "main.h"
/**
 * swap_int - a function that swaps the integers of its parameters
 * and updates the value it points to to 98
 * @a: input
 * @b: input
 * Return: n
 */

void swap_int(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}
