#include "main.h"
/**
 * print_alphabet
 *
 * Return : no return
 */

void print_alphabet(void)
{
	int i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	for ( i = 0; i < 26; i++)
	{
		_putchar(alphabet[i]);
	}
	_putchar('\n');
}
