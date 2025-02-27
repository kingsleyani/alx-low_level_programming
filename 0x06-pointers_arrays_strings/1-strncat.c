#include "main.h"

/**
 * *_strncat - a function that concatenates two strings.
 * @dest: destination pointer
 * @src : source pointer
 * @n: Integer parameter
 * Return: char[] concatenated
 */
char *_strncat(char *dest, char *src, int n)
{
	char *d;
	char *s;
	int counterS = 0, counterD = 0, i, j;

	for (s = src; *s != '\0'; s++)
		counterS++;
	for (d = dest; *d != '\0'; d++)
		counterD++;

	j = counterD++;
	if (n >= counterS)
		n = counterS;
	for (i = 0; i < n; i++)
	{
		dest[j] = src[i];
		j++;
	}
	return (dest);
}
