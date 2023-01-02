#include <stdio.h>

int main()
{
	float A, B, C;
	float bilangan = 0;
	float bil, akar;

	scanf("%f %f %f", &A, &B, &C);

	bil = (B * B) - (4 * (A) * (C));

	akar = bil / 2;

	if (bil > 0 && A != 0)
	{
		while (akar != bilangan)
		{
			bilangan = akar;
			akar = (bil / bilangan + bilangan) / 2;
		}

		float a, b;

		a = (-B + akar) / (2 * A);
		b = (-B - akar) / (2 * A);

		printf("R1 = %0.5f\n", a);
		printf("R2 = %0.5f\n", b);
	}

	else
	{
		printf("Perhitungan yang mustahil\n");
	}

	return 0;
}