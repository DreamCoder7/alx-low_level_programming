#include <stdio.h>

/**
  * main - entry point
  *
  * Description: Print all single digit numbers of base 16
  * Return: 0
  */

int main(void)
{
	int str;

	for (str = 25; str >= 0; --str)
		putchar('a' + str);

	putchar('\n');
	return (0);
}
