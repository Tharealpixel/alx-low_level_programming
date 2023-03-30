#include <stdio.h>

int main(void)
{
	int num;
	int arr[5];
	int *ptr;

	arr[2] = 1024;
	ptr = &num;
  
	/*
	* Write a line of code that will assign the value 98 to the integer
	* variable located 5 integers after the memory address pointed to by ptr.
	* 
	* Restictions:
	* - Do not use the array arr
	* - Do not modify the pointer ptr
	* - Use only one statement
	*/

	*(ptr + 5) = 98; // Assign 98 to the integer variable located 5 integers after ptr

	/* This should print "98\n" */
	printf("*(ptr + 5) = %d\n", *(ptr + 5));

	return (0);
}
