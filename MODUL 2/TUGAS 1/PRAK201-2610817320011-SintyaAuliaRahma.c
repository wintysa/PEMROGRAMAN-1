#include <stdio.h>

int main() {
    char nama[100], kelas[50], ttl[100], alamat[100], hobby[50], nohp[20], nim[20];

    printf("Nama : ");
    fgets(nama, 100, stdin);

    printf("NIM : ");
    fgets(nim, 20, stdin);

    printf("Kelas Paralel : ");
    fgets(kelas, 50, stdin);

    printf("Tempat/Tanggal Lahir : ");
    fgets(ttl, 100, stdin);

    printf("Alamat : ");
    fgets(alamat, 100, stdin);

    printf("Hobby : ");
    fgets(hobby, 50, stdin);

    printf("No. HP : ");
    fgets(nohp, 20, stdin);

    printf("Nama : %s", nama);
    printf("NIM : %s", nim);
    printf("Kelas Paralel : %s", kelas);
    printf("Tempat/Tanggal Lahir : %s", ttl);
    printf("Alamat : %s", alamat);
    printf("Hobby : %s", hobby);
    printf("No. HP : %s", nohp);

    return 0;
}