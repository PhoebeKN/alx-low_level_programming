#include "main.h"
#include <stdio.h>
/**
 * print_line - prints a straight line
 * @n: the number of times straight line is printed
 * Return: always 0
 */
void print_line(int n)
{
	int i;

	for  (i = 0; i < n; i++)
	{
		_putchar(95);
	}
}
