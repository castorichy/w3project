#include "main.h"
#include <stdio.h>

/**
 * draw_F - draws shape F
 * @a: holds a character
 * Return: 0
 */

void draw_F(char *a)
{
	int i, j;
	for (i = 0; i < 6; i++)
	{
		if (i == 0)
		{
			for (j = 0; j < 4; j++)
			{
				printf("%s", a);
			}
		}

		printf("%s\n", a);
		if (i == 1)
		{
			for (j = 0; j < 3; j++)
			{
				printf("%s", a);
			}
		}
	}
}

/**
 * draw_L - draws shape L
 * @a: holds a character
 * Return: 0
 */

void draw_L(char *a)
{
	int i, j;
	for (i = 0; i < 6; i++)
	{
		if (i == 5)
		{
			for (j = 0; j < 4; j++)
			{
				printf("%s", a);
			}
		}
	}
}
