#include "main.h"
/**
 * reverse_array - Reverse content
 * @a: array of integers
 * @n: Number of elements to swap
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int *x, i, j, k;

	x = a;

	for (i = 1; i < n; i++)
	{
		x++;
	}
	for (k = 0; k < i / 2; k++)
	{
		j = a[k];
		a[k] = *x;
		*x = j;
		x--;
	}
}
