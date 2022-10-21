#include "main.h"
/**
 *more_numbers - Print 10 times the numbers since 0 up to 14
 *
 *@n: The number of lines to draw
 *
 *Return: 10 times of the numbers since 0 up to 14
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
