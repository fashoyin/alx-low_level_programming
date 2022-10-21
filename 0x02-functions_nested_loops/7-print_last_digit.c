#include "main.h"
/**
 * main - Prints last digit onf an integer
 *
 * @n: This is the number
 *
 * Return: Returns (0) as success
 */

int print_last_digit(int n)
{
	int num;

	num= n % 10;
	if (num < 0)
		num = num * -1;
	_putchar(num + '0');
	return (num);
}
