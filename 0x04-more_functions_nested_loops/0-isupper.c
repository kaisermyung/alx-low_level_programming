#include "main.h"
#include <stdio.h>
/**
 * _isupper 
 * return: 0 if char  is lower and 1 if char is upper 
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
