#include <stdio.h>
#include <stdlib.h>

int main() {
    int bilanganBulat;

    printf("Masukkan bilangan bulat: ");
    scanf("%d", &bilanganBulat);

    if (bilanganBulat == 0) {
        printf("Bilangan nol\n");
    } else if (bilanganBulat > 0) {
        printf("Bilangan positif\n");
    } else {
        printf("Bilangan negatif\n");
    }

    return 0;
}