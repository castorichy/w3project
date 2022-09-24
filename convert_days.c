#include <stdio.h>

/**
 * main - main Entry
 *
 * Return: Always zero
 */

int main(void)
{
	int days, day, weeks, year;

	printf("Number of days: ");
	scanf("%d", &days);

	year = days / 365;
	weeks = (days % 365) / 7;
	day = ((days % 365) % 7);

	printf("\n\tTest Data:\nNumber of days: %d.\n\n\tConverte To:\nYears: %d\nWeeks: %d\ndays: %d", days, year, weeks, day);

	return (0);
}
