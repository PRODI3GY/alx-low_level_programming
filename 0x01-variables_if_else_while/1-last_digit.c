#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This is the main function
 * Return: always 0
 */
int main(void)
{
	int n;
	int Lastdgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Lastdgt = n % 10;
	if (Lastdgt > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, Lastdgt);
	} else if (Lastdgt == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, Lastdgt);
	} else if (Lastdgt < 6 && Lastdgt != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Lastdgt);
	}
	return (0);
}
