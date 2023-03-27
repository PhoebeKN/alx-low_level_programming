#include "main.h"
/**
 * _strcpy - string copies
 * @dest: destination array
 * @src: source
 * Return: copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}

