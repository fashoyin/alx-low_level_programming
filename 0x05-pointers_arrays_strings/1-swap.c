#include "main.h"
/**
 *swap_int - swaps integers
 *@a: integer1 to be swapped
 *@b: integer2 to be swapped
 *Return: Void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = *a;

}
