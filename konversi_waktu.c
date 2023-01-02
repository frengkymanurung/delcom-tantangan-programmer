#include <stdio.h>

int main()
{
    int N, waktu;

    scanf("%d", &N);

    waktu = ((N % 3600) - ((N % 3600) % 60)) / 60;
    printf("%d:%d:%d\n", (N - (N % 3600)) / 3600, waktu, (N % 3600) % 60);

    return 0;
}