#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */

int main(void)

{

		int n;
	
		srand(time(0));
		n = rand() - RAND_MAX / 2;
		
		if (n>5)
		{
			printf("%s%d%s","Last digit of ",n," and is greater than 5");
		
		}
		else
		{
			if (n==0)
			{
				printf("%s%d%s","Last digit of ",n," and is 0\n");
			}
			else
			{
				if (n<6 && n!=0)
				{
					printf("%s%d%s","Last digit of n ",n,"and is less than 6 and not 0\n");
				}
			}
			
		}

		return (0);

}
