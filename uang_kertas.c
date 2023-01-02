#include <stdio.h>

int main()
{
    int N, uangKertas100, uangKertas50, uangKertas20, uangKertas10, uangKertas5, uangKertas2, uangKertas1;

    scanf("%d", &N);

    if (0 < N && N < 1000000)
    {
        printf("%d\n", N);
        uangKertas100 = N % 100;
        printf("%d lembar uang Rp.100,00\n", (N - uangKertas100) / 100);

        uangKertas50 = uangKertas100 % 50;
        printf("%d lembar uang Rp.50,00\n", (uangKertas100 - uangKertas50) / 50);

        uangKertas20 = uangKertas50 % 20;
        printf("%d lembar uang Rp.20,00\n", (uangKertas50 - uangKertas20) / 20);

        uangKertas10 = uangKertas20 % 10;
        printf("%d lembar uang Rp.10,00\n", (uangKertas20 - uangKertas10) / 10);

        uangKertas5 = uangKertas10 % 5;
        printf("%d lembar uang Rp.5,00\n", (uangKertas10 - uangKertas5) / 5);

        uangKertas2 = uangKertas5 % 2;
        printf("%d lembar uang Rp.2,00\n", (uangKertas5 - uangKertas2) / 2);

        uangKertas1 = uangKertas2 % 1;
        printf("%d lembar uang Rp.1,00\n", (uangKertas2 - uangKertas1) / 1);
    }

    else
    {
        printf("Invalid\n");
    }

    return 0;
}