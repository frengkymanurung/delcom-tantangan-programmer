#include <stdio.h>

int main()
{
	double x, y, z;

	scanf("%lf", &x);
	scanf("%lf", &y);
	scanf("%lf", &z);

	printf("SEGITIGA: %0.3lf\n", (x * z) / 2);
	printf("LINGKARAN: %0.3lf\n", (3.14159 * z) * z);
	printf("TRAPEZIUM: %0.3lf\n", ((x + y) * z) / 2);
	printf("PERSEGI: %0.3lf\n", y * y);
	printf("PERSEGI PANJANG: %0.3lf\n", x * y);

	return 0;
}
