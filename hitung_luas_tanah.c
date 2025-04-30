
#include <stdio.h>

int main() {
    float panjang, lebar, luas;

    // Input panjang dan lebar tanah
    printf("Masukkan panjang tanah (dalam meter): ");
    scanf("%f", &panjang);
    printf("Masukkan lebar tanah (dalam meter): ");
    scanf("%f", &lebar);

    // Menghitung luas tanah
    luas = panjang * lebar;

    // Menampilkan hasil
    printf("Luas tanah berdasarkan kalkulasi adalah: %.2f meter persegi\n", luas);

    return 0;
}
