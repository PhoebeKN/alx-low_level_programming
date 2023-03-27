#include "main.h"
/**
 * _strlen - prints length of a string
 *@s: length to be printed
 * Return: always 0
 */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}

