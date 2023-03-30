#include <stdio.h>
#include "main.h"

int main(void)
{
	int num;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &num;
  
	/*
	* Write a line of code that will assign the value 98 to the integer
	* variable located 5 integers after the memory address pointed to by ptr.
	* 
	* Restictions:
	* - Do not use the array a
	* - Do not modify the pointer p
	* - Use only one statement
	*/

	*(p + 5) = 98; /* Assign 98 to the integer variable located 5 integers after p*/

	/* This should print "98\n" */
	printf("*(p + 5) = %d\n", *(p + 5));

	return (0);
}
