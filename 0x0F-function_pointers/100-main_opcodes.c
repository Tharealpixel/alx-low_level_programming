#include <stdlib.h>

int main(int argc, char *argv[])
{
	int index, nbytes;
	char *ptr = (char *)main;
	char hex[] = "0123456789abcdef";

	if (argc != 2)
	{
		char error[] = "Error\n";
		int i = 0;
		while (error[i] != '\0')
		{
			_putchar(error[i]);
			i++;
		}
		exit(1);
	}

	nbytes = atoi(argv[1]);
	if (nbytes < 0)
	{
		char error[] = "Error\n";
		int i = 0;
		while (error[i] != '\0')
		{
			_putchar(error[i]);
			i++;
		}
		exit(2);
	}
	for (index = 0; index < nbytes; index++)
	{
		char c = hex[(ptr[index] >> 4) & 0xF];
		_putchar(c);
		c = hex[ptr[index] & 0xF];
		_putchar(c);
		if (index != nbytes - 1)
			_putchar(' ');
	}
	_putchar('\n');
	return 0;
}
