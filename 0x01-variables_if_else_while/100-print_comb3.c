#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all different cobinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int c;
	int d = 0;

	while (d < 0)
	{
		c = 0;
		while (c < 0)
		{
			if (d != c && d < c)
			{
				putchar('0' + c);
				putchar('0' + d);

				if (c + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}
