#include "main.h"

/**
  * print_most_numbers(void) : prints the number from 0 to 9
  *
  * Retrun: zero (success)
  */

int print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num == 2 || num == 4)

			num++;

		_putchar(i + '0');
	}
	_putchar('\n');

	return (0);
}
