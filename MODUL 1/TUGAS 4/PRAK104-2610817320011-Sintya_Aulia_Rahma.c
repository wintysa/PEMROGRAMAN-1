#include <stdio.h>

int main() {
    int harga_a = 400000;
    int harga_b = 350000;
    int diskon_a = 13;
    int diskon_b = 21;

    int akhir_a = harga_a - harga_a * diskon_a / 100;
    int akhir_b = harga_b - harga_b * diskon_b / 100;

    printf("Harga sepatu A adalah %d\n", harga_a);
    printf("Harga sepatu B adalah %d\n", harga_b);
    printf("Sepatu A mendapat diskon %d%% sehingga harganya menjadi %d\n", diskon_a, akhir_a);
    printf("Sepatu A mendapat diskon %d%% sehingga harganya menjadi %d\n", diskon_b, akhir_b);
    return 0;
}
