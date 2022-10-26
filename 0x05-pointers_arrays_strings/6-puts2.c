#include "main.h"
/**
 *puts2 - void puts2(char *str)
 *@str: The string being considered
 *Return : Reeturns void
 */
void puts2(char *str)
{
	int i = 0;

	int j;

	while (str[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
