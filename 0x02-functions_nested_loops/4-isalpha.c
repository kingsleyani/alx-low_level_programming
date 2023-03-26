#include "main.h"
/**
 * isalpha - checks for alphabetic character
 * @c: the character to be checked
 * Description: function returns 1 if the character is a
 * letter, lowercase or uppercase.
 * Return 1 if c is a letter, lowercase or uppercase; otherwise
 i*/
int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			 if (c == lower || c == upper)
			 isletter = 1;
		}
	}
	return (isletter);
}
