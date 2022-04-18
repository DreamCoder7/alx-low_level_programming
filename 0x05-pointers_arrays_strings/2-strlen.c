#include "main.h"

/**
  * _strlen - return the length of a string.
  * @s : A pointer to an int that will be updated
  *
  * Return: void that means our answer is correct
  */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
