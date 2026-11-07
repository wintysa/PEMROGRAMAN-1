#include <stdio.h>

int main() {
    int kelipatan;
    char simbol[10];

    scanf("%d", &kelipatan);
    scanf("%s", simbol);

    for (int i = 1; i <= 50; i++) {
        if (i % kelipatan == 0) {
            printf("%s ", simbol);
        } else {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
