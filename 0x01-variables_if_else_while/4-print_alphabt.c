#include <stdio.h>
/**
 * main - The main
 *
 * Description: alphabets in lowercase
 *
 * Return: Always true when 0
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'q' && i == 'e')
		{}
		else
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0)
}
