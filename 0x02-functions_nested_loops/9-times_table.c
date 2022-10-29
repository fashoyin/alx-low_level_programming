#include "main.h"
/**
 * time_table - prints 9 times table
 *
 * Return: empty  
 */
void times_table(void)
{

	int i, n;

	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n =i * j;
			_putchar(n + '0');
		}
	}
}
