#include <stdio.h>

/**
  * main - entry point
  *
  * Description: Print all single digit numbers of base 16
  * Return: 0
  */

int main(void)
{
	int num;
	int str;

	for (num = 0; num < 10; ++num)
		putchar('0' + num);

	for (str = 0; str < 6; ++str)
		putchar('a' + str);

	putchar('\n');
	return (0);
}
