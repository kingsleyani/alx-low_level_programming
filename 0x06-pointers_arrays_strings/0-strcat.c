#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: string of destiny, pointer to a char[]
 * @src: source string, pointer to a char[]
 * Return: char[] concatenated
 */
char *strcat(char *dest, char *src)
{
	char *d;
	char *s;
	int counterS = 0, counterD = 0, i, j;

	for (s = src; *s != '\0'; s++)
		counterS++;
	for (d = dest; *d != '\0' d++)
		counterD++;

	j = counterD;
	for (i = 0; < counterS; i++)
	{
		dest[j] = src[i];
			j++;
	}
	return (dest);
