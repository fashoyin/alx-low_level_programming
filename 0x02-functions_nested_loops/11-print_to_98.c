#include "main.h"
#include <stdio.h>
/**
 * print_to_98 -  prints all natural numbers from n to 98, followed by a new line.
 * @n: starting number
 * Return: Natural numbers
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; ++n)
		{
			printf('%d', n);
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n > 98)
	{
		for (; n > 98; --n)
		{
			printf('%d', n);
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		printf('%d', n);
	}
	_putchar('\n');
}
