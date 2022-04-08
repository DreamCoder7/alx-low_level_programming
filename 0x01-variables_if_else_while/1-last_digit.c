#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
  * main - Prints if the specify condition for (@n) is fulfil
  * Return - return if the a bove value is correct. 0 otherwise
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
		printf(" is %d", lastDigit);
		printf(" and is greater than 5\n");
	}
	else if (lastDigit == 0)
	{
		printf("Last digit of ");
		printf("%d", n);
		printf(" is %d", lastDigit);
		printf(" and is 0\n");
	}
	else
	{
		printf("Last digit of ");
		printf("%d", n);
		printf(" is %d", lastDigit);
		printf(" and is less than 6 and not 0\n");
	}
	return (0);
}
