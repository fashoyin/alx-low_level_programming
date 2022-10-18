#include <stdio.h>
/**
 *main - main
 *
 * Description: my description
 *
 * return: Always true when 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
		for (j = 0; j <=9; j++)
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');

			if (i = 9 && j = 9)
			{
				continue;
			}
			putchar(',')
			putchar(' ')
	return (0);
}
