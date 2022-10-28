#include "main.h"
/**
 * _strncat -function that concatenates two strings.
 * @dest: destination string
 * @src: source  string
 * @n: number of bytes from src
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;


	while (dest[i])
	{
		i++;
	}
	while (j < n && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i + n + 1] = '\0';
	return (dest);
}
