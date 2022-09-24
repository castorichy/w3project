#include "stdio.h"
#include <string.h>

/**
 * main - reverses a string
 *
 * Return: Always zero
 */

int main (void)
{
	char alpha[10];
	int i, len;

	printf("Enter a string to reverse: ");
	scanf("%s", alpha);

	len = strlen(alpha);

	for (i = len; i >= 0; i--)
	{
		printf("%c", alpha[i]);
	}
	printf("\n");

	return (0);
}
