#include "main.h"
/**
 * Updating the value in a pointer address
 * @n is the value being updated
 * Return: 0 always succesful
 */

void reset_to_98(int *n)
{
	int n;

	*p = &n;
	*p =98;
	printf("n = %d \n n = %d",n,*p );
}
