#include <stdio.h>
#include <string.h>

int main() {
    char nama[50];
    int usia;

    printf("Masukkan nama Anda: ");
    fgets(nama, sizeof(nama), stdin);
    nama[strcspn(nama, "\n")] = 0; 

    printf("Masukkan usia Anda: ");
    scanf("%d", &usia);

    printf("\nHalo %s! Anda berusia %d tahun.\n", nama, usia);
    printf("Mahasiswa UPN JAYA JAYA JAYA!\n");

    return 0;
}


