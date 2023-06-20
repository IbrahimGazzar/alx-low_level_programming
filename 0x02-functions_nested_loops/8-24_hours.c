#include "main.h"

/**
 * jack_bauer - print all minutes of the day in the HH:MM formate
 *
 * Return: no return value
 */

void jack_bauer(void)
{
	int hour;
	int minute;
	int hour_10;
	int hour_01;
	int minute_10;
	int minute_01;

	for (hour = 0; hour < 24; hour++)
	{
		hour_01 = hour % 10;
		hour_10 = (hour - hour_01) / 10;
		minute = 0;
		for (minute = 0; minute < 60; minute++)
		{
			minute_01 = minute % 10;
			minute_10 = (minute - minute_01) / 10;
			_putchar(hour_10 + 48);
			_putchar(hour_01 + 48);
			_putchar(':');
			_putchar(minute_10 + 48);
			_putchar(minute_01 + 48);
			_putchar('\n');
		}
	}
}
