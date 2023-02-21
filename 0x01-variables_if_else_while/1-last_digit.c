#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - Check for last num
 *
 *   Return: 0(sucess)
 */

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d", n, last_digit);
			       printf(" and is greater than 5\n");
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %d",n , last_digit);
			       printf("	and is 0\n");
	}
	else
	{
		printf("Last digit of %d is %d", n, last_digit);
		       printf("	and is less than 6 and not 0\n");
	}
	return (0);
}
