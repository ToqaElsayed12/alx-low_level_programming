#include"main.h"

/**
 * print_alphabet - Utilizes on the _putchar function to print
 *			the alphabet a - z
*/

void print_alphabet(void)
{
	int Ch;

	for (Ch = 'a'; Ch < = 'z'; Ch+ +)
			_putchar(Ch);
	_putchar('\n');
}
