#include "main.h"

/**
 * _islower - return 1 if the character is lower and 0 if the character is upper
 *
 * Returns : 0 or 1
 *
 */
int _islower(int c)
{
	if ('A'<= c && c <= 'Z')
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
