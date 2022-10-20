#include "main.h"
/**
 * main -main
 *
 * Description: diplays alphabets 10x
 *
 * Return: success (1)

void print_alphabet_x10(void)
{
	int i = 0;
	char c;
	while (i<10)
	{
		for (c = 'a', c <= 'z', c++)
			_putchar(c);
		_putchar('\n');
		i++
	}
}
