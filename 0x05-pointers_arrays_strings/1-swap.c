#include "main.h"

/**
  * swap_int - Takes two integers and swap the values.
  *
  * @a : parameter one
  * @b : parameter two
  *
  * Return - nothing
  */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
