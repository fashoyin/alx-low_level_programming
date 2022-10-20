#include "main.h"



/**
 *
 * print_alphabet - Make the alphabet
 *
 *Return: void
 *
 */


int main(void)
{
	print_alphabet();

	return (0);
}

void print_alphabet()

{

		char c;
		for (c = 'a'; c <= 'z'; c)
		{
			_putchar(c);

							
			_putchar('\n');
		}
}

