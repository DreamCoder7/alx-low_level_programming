#include "main.h"

/**
  *print_alphabet - Print the alphabet, in lowercase, followed by new line 
 */

void print_alphabet(void)
{
	char word;

	for (word = 'a'; word <= 'z'; word++)
		_putchar(word);

	_putchar('\n');
}
