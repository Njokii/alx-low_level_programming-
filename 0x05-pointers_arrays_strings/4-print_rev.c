#include "main.h"

/**
  *print_rev - reverses a string
  *@s: characters to be reversed
  *Return: Always 0
  */

void print_rev(char *s)
{
	int i, c;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	c = i - 1;
	while (c >= 0)
	{
		_putchar(s[c]);
		c--;
	}
	_putchar('\n');
}
