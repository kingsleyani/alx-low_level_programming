#include "main.h"
#include <stdio.h>
/**
 * _isdigit - check if value is digit
 * @c: the value to be evaluated
 * return: 1 if c is upper, 0 if not
 */
int _isdigit(int c)
{
	if (c >= '1' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
