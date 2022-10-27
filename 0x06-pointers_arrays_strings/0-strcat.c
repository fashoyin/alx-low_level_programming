#include "main.h"
/**
 * _strcat - appends the src string to the dest string
 * @dest: Destination string
 * @src: Surce string
 * Return: pointer to the resulting string dest
 */


char *_strcat(char *dest, char *src)
{
	int j = 0;

	int i;

	while (dest[j])
	{
		j++;
	}
	for  (i =  0; src[i] != '\0'; i++)
	{
		dest[j] = src[i];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
