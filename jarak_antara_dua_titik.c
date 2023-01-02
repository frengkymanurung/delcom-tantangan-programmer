#include <stdio.h>

int main()
{
    double x1, x2, y1, y2, hasil, akar;
    double mis = 0;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    hasil = ((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2));
    akar = hasil / 2;

    while (akar != mis)
    {
        mis = akar;
        akar = (hasil / mis + mis) / 2;
    }
    printf("%0.4lf\n", akar);

    return 0;
}