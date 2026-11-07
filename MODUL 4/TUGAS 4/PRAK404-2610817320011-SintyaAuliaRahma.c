#include <stdio.h>

int main() {
    int pilih;
    float nilai1, nilai2, hasil;

    while (1) {
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan : ");
        scanf("%d", &pilih);

        if (pilih == 5) {
            printf("Terimakasih, telah menggunakan kalkulator Sintya Aulia Rahma\n");
            break;
        } else if (pilih == 1 || pilih == 2 || pilih == 3 || pilih == 4) {
            printf("Masukkan nilai pertama : ");
            scanf("%f", &nilai1);
            printf("Masukkan nilai kedua : ");
            scanf("%f", &nilai2);

            if (pilih == 1) {
                hasil = nilai1 + nilai2;
                printf("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f\n", nilai1, nilai2, hasil);
            } else if (pilih == 2) {
                hasil = nilai1 - nilai2;
                printf("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n", nilai1, nilai2, hasil);
            } else if (pilih == 3) {
                hasil = nilai1 * nilai2;
                printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n", nilai1, nilai2, hasil);
            } else {
                hasil = nilai1 / nilai2;
                printf("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n", nilai1, nilai2, hasil);
            }
        } else {
            printf("Input anda salah, silahkan coba lagi\n");
        }
    }

    return 0;
}
