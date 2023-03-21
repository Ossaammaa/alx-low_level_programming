#include "main.h"

/**
 * main - Entry point
 * Return: Always 0
 */

void print_alphabet(void)
{
	char x = 'a';
	for(;x <= 'z';)
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
