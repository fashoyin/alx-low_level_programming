#include "main.h"

/**
 *_islower - Checks for lowercase character
 *
 *@c: Checks c for lowercase characters
 *
 *Return: if lower (1) and any other (0)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
