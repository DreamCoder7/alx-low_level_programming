#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - Print if one of the specify condition become true based on the @n value
  *
  * Return - return 0 if any of the specify condition aren't true
  */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if (lastDigit > 5)
	{
		printf("Last digit of ");
		printf("%d", n);
		printf(" is greater than 5\n");
	}
	else if (lastDigit == 0)
	{
		printf("Last digit of ");
		printf("%d", n);
		printf(" and is 0\n");
	}
	else
	{
		printf("Last digit of ");
		printf("%d", n);
		printf(" and is less than 6 and not 0\n");
	}
	return (0);
}
