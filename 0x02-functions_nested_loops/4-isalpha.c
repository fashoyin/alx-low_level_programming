#include <main.h>
/**
 * _isalpha - Checks for alphabetic character
 *
 * @c: C  is the character that is being determined
 *
 * Return: 1 for alphabetic character or 0 for anything else
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90 || c > 96 && c < 123)
		return (1);
	return (0);
}
