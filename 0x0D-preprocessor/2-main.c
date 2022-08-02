#include <stdio.h>
#include <stdlib.h>
#ifndef __FILE__
#define __FILE__
/**
 * main - prints name of file
 * Return: Always 0 success
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
#endif
