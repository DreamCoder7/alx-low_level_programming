#include "main.h"
#include "_putchar.c"

/**
  * _isdigit - checks for a digit 0 through 9
  * @c: input
  * Return: 1 if is a number o through 9, 0 otherwise.
  */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
