#include "main.h"

/**
 * jack_bauer - Entry point for function
 * jack_bauer - print every minute of ...
 */
void jack_bauer(void)
{
	int hr;
	int mins;

	for (hr = 0; hr < 24; hr++)
	{
		for (mins = 0; mins < 60; mins++)
		{
			_putchar('0' + (hr / 10));
			_putchar('0' + (hr % 10));
			_putchar(':');
			_putchar('0' + (mins / 10));
			_putchar('0' + (mins % 10));
			_putchar('\n');
		}
	}
}
