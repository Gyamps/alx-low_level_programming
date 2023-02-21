#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer, starting
 * from 00:00 to 23:59
 *
 * Function takes no argument
 *
 * Return: nothing
 */

void jack_bauer(void);
{
	int H, h, M, m;

	H = h = M = m = 0;
	while (H <= 2)
	{
		while (h <= 3)
		{
			while (M <= 5)
			{
				while (m <= 9)
				{
					_putchar(H + 48);
					_putchar(h + 48);
					_putchar(':');
					_putchar(M + 48);
					_putchar(m + 48);
					_putchar('\n');
					m++;
				}
				M++;
				m = 0;
			}
			h++;
			M = 0;
		}
		H++;
		h = 0;
	}
	H = 0;
}
