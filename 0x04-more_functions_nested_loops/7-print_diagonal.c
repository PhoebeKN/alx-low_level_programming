#include "main.h"
/**
 * print_diagonal - prints diagonal lines
 * @n: times diagonal lines is printed
 * Return: always 0
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return (0);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			_putchar(' ')
		}
		 _putchar('\\');
		 _putchar('\n');
	}
}
