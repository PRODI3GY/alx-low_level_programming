#include "main.h"
/**
 * factorial - Returns the Factorial of a given no.
 * @n: int
 * Return: Factorial
 */

int factorial(int n)
{
	if (n < 0)
	return (-1);
	else if (n == 0)
	return (1);
	else
	return (n * factorial(n - 1));
}
