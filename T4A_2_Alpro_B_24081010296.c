#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    char copy[100];

    // Meminta input dari pengguna
    printf("Masukkan kata motivasi Anda: ");
    scanf(" %[^\n]", input); // Menggunakan %[^\n] agar bisa membaca spasi

    // Menyalin string menggunakan strcpy
    strcpy(copy, input);

    // Menampilkan kembali kata motivasi
    printf("\nKata motivasi Anda adalah: %s\n", copy);
    printf("MASOKK AREK UPN ANCEN CALON SUKSES!\n");

    return 0;
}
