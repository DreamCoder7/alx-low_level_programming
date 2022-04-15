#include "main.h"

/**
  * print_numbers - print the numbers, from 0 to 9, followed by a new line
  *
  * Return: zero
  */
void print_numbers(void)
{
	int num;

	for ( num = 0; num < 10; num++)
	{
		_putchar("%d", num);
	}

	_putchar("\n");
	return (0);
}
