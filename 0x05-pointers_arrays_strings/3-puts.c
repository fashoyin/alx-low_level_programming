#include "main.h"
/**
 * _puts - Prints the sting to stdout
 * @str : contains string
 * Return: void
 */

void _puts(char *str)
{
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
