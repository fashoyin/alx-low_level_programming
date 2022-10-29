#include "main.h"
/**
 * time_table - prints 9 times tabl
 * Return: empty  
 */
void times_table(void)
{

	int i, n;

	int j, u, d;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n =i * j;
			if (n > 9)
			{
				u = n % 10;
				d = (n - u) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(d + '0');
				_putchar(u + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(n + '0');
			}
		}
		_putchar('\n');
	}
}
