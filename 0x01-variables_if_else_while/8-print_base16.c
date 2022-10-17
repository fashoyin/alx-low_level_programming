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
	char j;

	for (i = 0; i <= 9; i++)
		putchar((i % 9) + '0');
	for (j = 'a'; j <= 'f'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
