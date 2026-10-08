#include <stdio.h>

int main() {
    int alas = 5;
    int tinggi = 12;
    int sisi_miring = 13;

    int sisi_a = alas;
    int sisi_b = tinggi;
    int sisi_c = sisi_miring;

    int keliling = sisi_a + sisi_b + sisi_c;
    int luas = alas * tinggi / 2;

    printf("Diketahui :\n");
    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n", tinggi);
    printf("Jawab :\n");
    printf("Sisi A = %d cm\n", sisi_a);
    printf("Sisi B = %d cm\n", sisi_b);
    printf("Sisi C = %d cm\n", sisi_c);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %d cm\n", luas);
    return 0;
}
