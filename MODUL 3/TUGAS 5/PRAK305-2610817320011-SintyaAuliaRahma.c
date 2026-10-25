#include <stdio.h>

int main() {
    int detik_total, jam, menit, detik, hari;

    scanf("%d", &detik_total);

    jam = detik_total / 3600;
    menit = (detik_total % 3600) / 60;
    detik = detik_total % 60;

    if (jam >= 24) {
        hari = jam / 24;
        jam = jam % 24;
        printf("%d hari %02d:%02d:%02d\n", hari, jam, menit, detik);
    } else {
        printf("%02d:%02d:%02d\n", jam, menit, detik);
    }

    return 0;
}
