#include "main.h"
/**
 * _isupper - searching for character c
 * @c: c is the charater 
 * Return: 0 if Upper and 1 if lower
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
