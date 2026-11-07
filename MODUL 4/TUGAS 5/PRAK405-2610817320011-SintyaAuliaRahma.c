#include <stdio.h>

int main() {
    int n, k;

    scanf("%d", &n);
    scanf("%d", &k);

    int total_keseluruhan = 0;

    for (int i = 1; i <= n; i++) {
        int jumlah_baris = 0;
        for (int j = i; j >= 1; j--) {
            if (j != i) {
                printf(" + ");
            }
            printf("(%d * %d)", j, k);
            jumlah_baris += j * k;
        }
        printf(" = %d\n", jumlah_baris);
        total_keseluruhan += jumlah_baris;
    }

    printf("%d\n", total_keseluruhan);

    return 0;
}
