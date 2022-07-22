#include <stdio.h>

/**
 * main - prints names
 * @agrc: number of arguments passed on a command line
 * @argv: array containing all the arguments paased in the command line
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
