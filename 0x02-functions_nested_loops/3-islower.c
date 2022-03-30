#include "main.h"

/**
 * _islower - return 1 if the character is lower 
 * and 0 if the character is upper
 *
 *@c: char in ascii code
 *
 * Return: 0 or 1
 *
 */
int _islower(int c)
{
	if (97 <= c && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
