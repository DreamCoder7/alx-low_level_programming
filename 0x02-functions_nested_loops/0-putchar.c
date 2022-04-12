#include <stdio.h>
#include <unistd.h>


/**
  * main - entry point
  *
  * Description: Print _putchar, followed by new line
  * Return: 0
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
