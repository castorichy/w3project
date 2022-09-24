#include <stdio.h>

int main(void)
{
	int i = 0, j = 0;

	while (i < 5)
	{
		while (j < 4)
		{
			printf("%d", j);
			j--;
		}
		printf("%d\n", i);
		i++;
	}
}
