#include "main.h"

/**
 * _strcmp - function that compares two string
 * @s1: pointer to the first char[]
 * @s2: pointer to the second char[]
 * Return: integer value
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
