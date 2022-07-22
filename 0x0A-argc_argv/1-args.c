#include <stdio.h>

/**
 * main - prints number of arguments passed into it
 * @argc: number of command line arguments
 * @argv: an array containing the program command line arguments
 * Return: number of arguments
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
