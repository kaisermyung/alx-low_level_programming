#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times
 *
 * Return : no return
 */

void print_alphabet_x10(void)
{
	int i, j;
	char chars[] = "abcdefghijklmnopqrstuvwxyz";
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar(chars[j]);
		}
		_putchar('\n');
	}
}
