#include <stdio.h>

int main() {
    int putaran = 5;
    int jarak = 14;
    float pi = 3.14;

    float jari_jari = jarak / (putaran * 2 * pi);

    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %d Kilometer\n", jarak);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", jari_jari);
    return 0;
}
