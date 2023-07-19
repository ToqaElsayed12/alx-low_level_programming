#include"main.h"
/**
 * print_alphabet - Utilizes on the _putchar function to print
 *			the alphabet a - z
*/
void print_alphabet(void)
{
	int Ch;

	for (Ch = 97; Ch <= 122; Ch++)
	{
		_putchar(Ch);
	}
	_putchar('\n');
}
