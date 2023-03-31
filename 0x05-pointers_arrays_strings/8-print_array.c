#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @p: array name
 * @n: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */
void print_array(int *p, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", p[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", p[n - 1]);
		}
			printf("\n");
}
