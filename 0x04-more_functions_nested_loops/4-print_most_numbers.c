#include "main.h"
#include "_putchar.c"

/**
  * print_most_numbers(void) : prints the number from 0 to 9
  *
  * Retrun: zero
  */
int print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		_putchar('%d' + num);
	}

	return (0);
}
