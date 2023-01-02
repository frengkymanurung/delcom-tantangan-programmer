#include <stdio.h>

int main()
{
	int a, b, c, d;
	double e, f;

	scanf("%d %d %f", &a, &b, &e);
	scanf("%d %d %f", &c, &d, &f);

	printf("JUMLAH YANG HARUS DIBAYAR: Rp %0.2f\n", (b * e) + (d * f));

	return 0;
}
