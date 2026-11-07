#include <stdio.h>

int main() {
    char baris[50];
    int a, b, jumlah;

    fgets(baris, sizeof(baris), stdin);
    jumlah = sscanf(baris, "%d %d", &a, &b);

    if (jumlah == 1) {
        int satuan = a % 10;
        int puluhan = a / 10;
        b = satuan * 10 + puluhan;

        if (a <= b) {
            for (int i = a; i <= b; i += 9) {
                if (i != a) {
                    printf("-");
                }
                printf("%d", i);
            }
        } else {
            for (int i = a; i >= b; i -= 9) {
                if (i != a) {
                    printf("-");
                }
                printf("%d", i);
            }
        }
        printf("\n");
    } else {
        if (a < b) {
            int n = b - a + 1;
            for (int i = 0; i < n; i++) {
                if (i != 0) {
                    printf(" - ");
                }
                printf("%d %d", a + i, b - i);
            }
        } else {
            int n = a - b + 1;
            for (int i = 0; i < n; i++) {
                if (i != 0) {
                    printf(" - ");
                }
                printf("%d %d", a - i, b + i);
            }
        }
        printf("\n");
    }

    return 0;
}
