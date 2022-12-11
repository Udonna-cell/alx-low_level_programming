#include <stdio.h>

/**
 * main - prints the size of data type
 * Return: returns 0
 */

int main(void)
{
	printf("size of char: %d byte(s)\n", sizeof(char));
	printf("size of int: %d byte(s)\n", sizeof(int));
	printf("size of long int: %d byte(s)\n", sizeof(unsigned int));
	printf("size of long long int: %d byte(s)\n", sizeof(long));
	printf("size of float: %d byte(s)\n", sizeof(float));
	return (0);
}
