#include "main.h"
#include <stdio.h>

/**
  * print_array - Prints n elements of an array of integer
  * @a: parameter 1 (array)
  * @n: parameter 2 (number of elements of the array)
  *
  * Return: nothing
  */

void print_array(int *a, int n)
{
	int array[n];
	int i;

	i = 0;

	for (i = 0; i < n; i++)
	{
		array[i] = *a;
		printf("%d, ", a);
		printf("\n");
	}
}
