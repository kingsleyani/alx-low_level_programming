#include "main.h"
/**
 * _isupper - check if character is uppercase
 *  @c : the character to be evaluated
 *  Return: 1 if c is upper, 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return 1;
	} else
	{
		return 0;
	}
}
