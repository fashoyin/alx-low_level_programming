#include "main.h"
/**
 * string_toupper - Changes all lowercase letters to uppercase
 * @p: string to be modified
 * Return: char var
 */

char *string_toupper(char *a)
{
	int i = 0;
	
	while (a[i])
	{
		if(a[i] >= 97 && a[i] <= 122)
		{
			a[i] -= 32;
		}
		i++;
	}
	return (a);
}
