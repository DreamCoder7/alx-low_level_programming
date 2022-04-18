#include "main.h"
#include "_putchar.c"

/**
  * _puts - Prints a string, followed by a new line
  * @str: The character to print
  *
  * Return: nothing
  */

void _puts(char *str)
{
	_putchar((char*)str);
	_putchar('\n');
}
