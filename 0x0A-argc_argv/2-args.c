#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of command line arguments
 * @argv: an array containing the program and command line arguments
 * Return: 0 success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf(" %s\n",  argv[i]);
	}
	return (0);
}
