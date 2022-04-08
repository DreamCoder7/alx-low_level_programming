#include <stdio.h>

/**
  * main - entry point
  *
  * Description: Print all single digit numbers of base 10
  * Return: 0
  */

int main(void)
{
	int j;

	for (j = 0; j < 10; ++j)
		putchar('0' + j);

	putchar('\n');
	return (0);
}
