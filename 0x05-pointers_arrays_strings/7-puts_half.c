#include "main.h"
/**
 * puts_half - prints the second half of the string
 * @str:string being printed
 * Return: void
 */
 
void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 = 1)
	{
		n = (i - 1) / 2;
	}
	else
	{
		n = i / 2;
	}
	for (; n < i; n++)
	{
		_putchar(str[n]);
	}
}

