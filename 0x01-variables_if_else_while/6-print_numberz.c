#include <stdio.h>
/**
 *main - ALx
 *
 *Description: putchar 0-10
 *
 * Return: Always true when equal to 0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar((i % 10) + '0');
	}
	putchar('\n');
	return (0);
}
