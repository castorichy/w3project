#include "main.h"
#include <stdio.h>

/**
 * main - Main Entry
 *
 * Return: Always return o
 */

int main(void)
{
	char l, f;

	printf("Available shapes to draw.\n1. F\n2. L\n\n ");

	printf("Enter a charcter To Draw 'F': ");
	scanf("%c", &f);

	draw_F(&f);

	printf("Enter a charcter To Draw 'L': ");
	scanf("%c", &l);

	draw_L(&l);

	return (0);	
}
