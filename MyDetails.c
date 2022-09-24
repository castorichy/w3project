#include <stdio.h>
#include <string.h>

/**
 * main - Main Entry
 *
 * Return: Always Return 0
 */

int main(void)
{
	char f_name[50], month[11], s_name[50];
	int day, mobileNo, year;

	printf("First Name: ");
	scanf("%s", f_name);
	printf("Second NAme: ");
	scanf("%s", s_name);
	printf("Day of Birth: ");
	scanf("%d", &day);
	printf("Month of Birth: ");
	scanf("%s", month);
	printf("Year of birth: ");
	scanf("%d", &year);
	printf("Mobile Number: ");
	scanf("%d", &mobileNo);

	printf("\n\nNAME:   %s %s\nDOB:     %s %d, %d\nMOBILE: +254%d", f_name, s_name, month, day, year, mobileNo);
	return (0);
}
