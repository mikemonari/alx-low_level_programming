#include "main.h"
/**
 * main - check the code.
 * _isalpha -> checks for alphabets.
 * @c: a character to be checked on
 * Return: Always 0.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
