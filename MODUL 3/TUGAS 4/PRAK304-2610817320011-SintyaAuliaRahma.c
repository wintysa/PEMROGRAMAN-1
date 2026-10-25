#include <stdio.h>

int main() {
    int a;

    scanf("%d", &a);

    if (a > 99) {
        printf("Anda Menginput Melebihi Limit Bilangan\n");
    } else if (a == 0) {
        printf("Nol\n");
    } else if (a < 10) {
        printf("Satuan\n");
    } else if (a < 20) {
        printf("Belasan\n");
    } else {
        printf("Puluhan\n");
    }

    return 0;
}
