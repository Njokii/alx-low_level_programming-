#include <stdio.h>

/**
  *main - entrypoint
  * printinig of lowercase letters except q and e
  *
  *Return: Always 0; succcess
  */
int main(void)
{
	int l;

	l = 97;
	while (l <= 122)
	{
		if ((l == 101) || (l == 113))
		{
			l++;
			continue;
		}
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}

