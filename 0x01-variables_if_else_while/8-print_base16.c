#include <stdio.h>
/**
 * main -main
 *
 * Description: Alx
 *
 * Return: Always true when 0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 16; i++)
		putchar('%x', i);
	putchar('\n');
	return (0);
}
