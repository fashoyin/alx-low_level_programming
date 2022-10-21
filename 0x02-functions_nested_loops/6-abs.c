#include "main.h"

/**
 *_abs - prints the absolute value`.
 *
 *@c: C is the number being considered.
 *
 *Return: Absolute value
 */

int _abs(int c)
{
	int absolute;

	if (c < 0)
	{
		absolute = c * -1;
		return (absolute);
	}
	return (c);
}
