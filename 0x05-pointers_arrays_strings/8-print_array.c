#include "main.h"
/**
 *print_array - Prints an array
 *@n: numvber elements in array
 *@a: array
 *Rerturn : elements in array n
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
		{
			printf(", ");
		}
	}
}
