#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}
	else
	{
		int c;
		int x = 0;

		c = atoi(argv[1]);
		if (c < 0)
		{
		printf("0\n");
		return 0;
		}
		if (c >= 25)
		{
			x += c / 25;
			c = c % 25;
		}
		if (c >= 10)
		{
			x += c / 10;
			c = c % 10;
		}
		if (c >= 5)
		{
			x += c / 5;
			c = c % 5;
		}
		if (c >= 2)
		{
			x += c / 2;
			c = c % 2;
		}
		if (c == 1)
		{
			x += 1;
		}
		printf("%d\n", x);
	}
	return (0);
}
