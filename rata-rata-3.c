#include <stdio.h>

int main () {
    float N1, N2, N3, N4;

    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

    printf("Rata-rata: %0.1f\n", (N4 + (N1 * 2) + (N2 * 3) + (N3 * 4)) / (1 + 2 + 3 + 4));

    if (((N4 + (N1 * 2) + (N2 * 3) + (N3 * 4)) / (1 + 2 + 3 + 4)) < 5) {
        printf("Siswa yang Ditegur.\n");
    }

    else if (((N4 + (N1 * 2) + (N2 * 3) + (N3 * 4)) / (1 + 2 + 3 + 4)) >= 7) {
        printf("Siswa yang Disetujui.\n");
    }

    else {
        printf("Dalam ujian.\n");

        float N5;

        scanf("%f", &N5);
        
        printf("Skor ujian: %0.1f\n", N5);

        if (((((N4 + (N1 * 2) + (N2 * 3) + (N3 * 4)) / (1 + 2 + 3 + 4)) + N5) / 2) >= 5) {
            printf("Siswa yang Disetujui.\n");
        }

        else if (((((N4 + (N1 * 2) + (N2 * 3) + (N3 * 4)) / (1 + 2 + 3 + 4)) + N5) / 2) < 5) {
            printf("Siswa yang Ditegur.\n");
        }

        printf("Rata-rata akhir: %0.1lf\n", (((N4 + (N1 * 2) + (N2 * 3) + (N3 * 4)) / (1 + 2 + 3 + 4)) + N5) / 2);
    }

    return 0;
}
