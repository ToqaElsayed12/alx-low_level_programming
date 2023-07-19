#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
*/

int main(void)

{
	char  Str[] =  "_putchar";
	int ch;

	for (ch = 0 ; ch < 8 ; ch++)
		_putchar(Str[ch]);
	_putchar('\n');

	return (0);
}
