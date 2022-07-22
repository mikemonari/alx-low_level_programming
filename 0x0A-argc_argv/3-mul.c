#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two integers
 * @argc: number of parameters passed in the command line
 * @argv: array contining all parameters passed in the command line
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i, j, k;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	k = i * j;
	printf("%d\n", k);
	return (0);
}
