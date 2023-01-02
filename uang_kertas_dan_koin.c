#include <stdio.h>

int main()
{
    int uangKertas100, uangKertas50, uangKertas20, uangKertas10, uangKertas5, uangKertas2, uangKertas1, koin05, koin025, koin01, koin005, koin001, n;
    float N;

    scanf("%f", &N);

    printf("Uang Kertas:\n");

    n = N * 100;

    uangKertas100 = n % 10000;
    printf("%d lembar uang Rp.100.00\n", (n - uangKertas100) / 10000);

    uangKertas50 = uangKertas100 % 5000;
    printf("%d lembar uang Rp.50.00\n", (uangKertas100 - uangKertas50) / 5000);

    uangKertas20 = uangKertas50 % 2000;
    printf("%d lembar uang Rp.20.00\n", (uangKertas50 - uangKertas20) / 2000);

    uangKertas10 = uangKertas20 % 1000;
    printf("%d lembar uang Rp.10.00\n", (uangKertas20 - uangKertas10) / 1000);

    uangKertas5 = uangKertas10 % 500;
    printf("%d lembar uang Rp.5.00\n", (uangKertas10 - uangKertas5) / 500);

    uangKertas2 = uangKertas5 % 200;
    printf("%d lembar uang Rp.2.00\n", (uangKertas5 - uangKertas2) / 200);

    printf("Koin:\n");

    uangKertas1 = uangKertas2 % 100;
    printf("%d koin Rp.1.00\n", (uangKertas2 - uangKertas1) / 100);

    koin05 = uangKertas1 % 50;
    printf("%d koin Rp.0.50\n", (uangKertas1 - koin05) / 50);

    koin025 = koin05 % 25;
    printf("%d koin Rp.0.25\n", (koin05 - koin025) / 25);

    koin01 = koin025 % 10;
    printf("%d koin Rp.0.10\n", (koin025 - koin01) / 10);

    koin005 = koin01 % 5;
    printf("%d koin Rp.0.05\n", (koin01 - koin005) / 5);

    printf("%d koin Rp.0.01\n", koin005);

    return 0;
}