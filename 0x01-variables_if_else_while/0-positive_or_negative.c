#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Postitive or negative
 *
 * Description: C-project
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

 	if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	
	}
	else if (n == 0)
	{
		prinf("%d is %s\n", n, "zero");
	}
	else
	{
		printf("%d is %s\n", n, "negative");
	}

	return (0);

}
