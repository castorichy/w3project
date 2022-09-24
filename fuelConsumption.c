#include <stdio.h>

/**
 * main - calculate amount of fuel bike consume in km/lt
 *
 * Return: Always 0
 */

int main(void)
{
	int distance_covered, fuel_spent;
	float avar_consumption;

	printf("Distance Covered in Kilomitres: ");
	scanf("%d", &distance_covered);
	printf("fuel consumed in Litres: ");
	scanf("%d", &fuel_spent);

	avar_consumption = distance_covered / fuel_spent;

	printf("Avarage Consumption: %.2fkm/lt", avar_consumption);

	return (0);
}
