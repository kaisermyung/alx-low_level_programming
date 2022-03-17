#include "main.h"
#include <stdio.h>
/**
 * _isupper 
 * return: Always
 */

int _isupper(int c)
{
	int res;
	if(c >= 'A' && c <= 'Z'){
		res=1;
	}
	else {
		res=0;
	}
	return (res);
}
