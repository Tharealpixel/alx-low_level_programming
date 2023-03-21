#include "main.h"
#include <stdio.h>

/*
 *
 * tkherbi9 dilahom
 *
 *
 * walo mafhmna wlo
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+\n");
		return(1);
	}
	if (n < 0)
	{
		printf("-\n");
		return(-1);
	}
	if (n == 0)
	{
		printf("0\n");
		return(0);
	}
}
