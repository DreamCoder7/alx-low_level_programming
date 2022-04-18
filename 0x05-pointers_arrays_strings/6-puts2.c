#include "main.h"

/**
  * puts2 - Prints every other character of a string
  * @str: recive string
  *
  * Return: nothing
  */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i / 2 == 0)
		{
			_putchar(i);
		}

		_putchar('\n');
	}

}
