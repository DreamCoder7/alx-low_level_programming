#include <stdio.h>

/**
  * main - entry point
  *
  * Description: Print all possible combinations of single-digit number
  * Return: 0
  */
int main(void)
{

	int num;

	for (num = 0; num < 10; ++num) 
	{
		putchar('0' + num);

		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
