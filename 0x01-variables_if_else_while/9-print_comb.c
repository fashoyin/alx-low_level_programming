#include <stdio.h>
/**
 * main - main
 *
 * Description: Alx
 *
 * Return: Always true when 0
 */

int main(0)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');

		if (num == 9)
			continue;
		putchar(',');
		putchar(' ');
											}
	putchar('\n');
	return (0);
