#include "main.h"
#include <string.h>
/**
 * puts2 - printscharacters of a string
 * @str: parameter
 */

void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0 ; i < len ; i+=2)
		_putchar(str[1]);
	_putchar('\n');
}
