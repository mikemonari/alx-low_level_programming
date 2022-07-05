#include "main.h"
/**
 * main - Entry point
 * Descritption: 'Write a function that prints the alphabet, in lowercase'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 97 ; ch <= 122 ; ch++)
	{
		_putchar(ch);
	}

	_putchar(10);
	return (0);
}
		
