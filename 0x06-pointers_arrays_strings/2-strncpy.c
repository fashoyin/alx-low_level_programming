#include "main.h"
/**
 * _strncpy -  function that copies a string.
 * @dest: destination string
 * @src : source string
 * @n: size of source string
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
