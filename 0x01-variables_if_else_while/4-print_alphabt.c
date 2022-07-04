#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Write a program that prints the alphabet in lowercase'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
		putchar(ch);
		}
	}
	putchar(10);

	return (0);
}
