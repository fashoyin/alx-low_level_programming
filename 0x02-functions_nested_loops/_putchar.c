#include <unistd.h>
/**
 *_putchar - Writes the c to <<stdout
 *
 * description: writes C
 *
 * Return: success (0)
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
