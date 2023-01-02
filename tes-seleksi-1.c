#include <stdio.h>

int main()
{
    int A, B, C, D, Agenap;

    scanf("%d %d %d %d", &A, &B, &C, &D);

    Agenap = 0;

    if ((A % 2) == 0)
    {
        Agenap = 1;
    }

    else
    {
        Agenap = 0;
    }

    if (B > C && D > A && (C + D) > (A + B) && ((C && D) >= 0) && Agenap == 1)
    {
        printf("Nilai diterima\n");
    }

    else
    {
        printf("Nilai tidak diterima\n");
    }
    return 0;
}