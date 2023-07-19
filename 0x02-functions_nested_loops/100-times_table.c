#include"main.h"

/**
 * print_times_table - prints time table of n
 *
 * @n: takes number input
*/

void print_times_table(int n)
{
	int Prod, mult, num;

	if (n <= 15 && n >=0)
	{
		for (num = 0; num <= n; ++num)
		{
			_putchar(48);
			for (mult = 1; mult <= n; ++mult)
			{
				_putchar(',');
				_putchar(' ');

				Prod = num * mult;

				if (Prod <= 9)
					_putchar(' ');
				if (Prod <= 99)
					_putchar(' ');
				if (Prod >= 100)
				{
					_putchar((Prod / 100) + 48);
					_putchar((Prod / 10) % 10 + 48);
				}else if (Prod <= 99 && Prod >= 10)
					_putchar((Prod / 10) + 48);
				_putchar((Prod % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
