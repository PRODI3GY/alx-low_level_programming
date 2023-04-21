#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - prints each array element on a newline
 * @array: An array
 * @size: Number of elements to be printed
 * @action: pointer to print in decimal or hexadecimal
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int f;

	if (array == NULL || action == NULL)
		return;

	for (f = 0; f < size; f++)
	{
		action(array[f]);
	}
}
