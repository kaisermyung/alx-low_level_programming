#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times
 *
 * Return : no return
 */

void print_alphabet_x10(void)
{
	int i;
	char chars[] = "abcdefghijklmnopqrstuvwxyz";
	for (i = 0; i < 10; i++)
	{
		for (j = 0; i < 26; i++)
		{
			_putchar(chars[i]);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
