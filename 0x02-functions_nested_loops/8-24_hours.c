#include "main.h"
#include <stdio.h>

/**
 * jack_bauer- prints every minute of the day
*/

int jack_bauer(void) 
{
	int h = 0;
	int m = 0;

	while (h < 24) 
	{
		while (m <= 59) 
		{
			printf("%02d:%02d\n", h, m);
			m++;
		}
		m = 0;
		h++;
	}

	return 0;
}
