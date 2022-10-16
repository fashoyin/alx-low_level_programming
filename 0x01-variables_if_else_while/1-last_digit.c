#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - If-else practice
 *
 * Description: Project
 *
 * Return: Always0 - Success
 */
int main(void)
{
	int n;

	char str1[] = "Last digit of";

	char str2[] = " is ";

	char str3[] = " and is greater than";

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
	{
		printf("%s%d%s%d%s\n", str1, n, str2, n % 10, str3);
	}
	else if (n % 10 == 0)
	{
		printf("%s%d%s%d%\ns", str1, n,  str2, n % 10, str3);
	}
	else if (n % 10 < 6 && n % 10 != 0)
	{
		printf("%s%d%s%d%s", "Last digit of ", n, " is ", n % 10, " and is less than 6 and not 0\n");
	}
	return (0);
}
