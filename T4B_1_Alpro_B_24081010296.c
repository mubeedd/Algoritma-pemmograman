#include <stdio.h>
#include <string.h>
#define PI 3.14159

void helloWorld() {
    printf("\nHello, World!\n");
    printf("Selamat Belajar C!\n\n");
}

void inputUser() {
    int angka;
    printf("Masukkan sebuah angka: ");
    scanf("%d", &angka);
    printf("Anda memasukkan: %d\n\n", angka);
}

void variabelBilangan() {
    int a = 10;
    float b = 5.5;
    char c = 'A';
    printf("Nilai a: %d\n", a);
    printf("Nilai b: %.2f\n", b);
    printf("Nilai c: %c\n\n", c);
}

void luasLingkaran() {
    float r, luas;
    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &r);
    luas = PI * r * r;
    printf("Luas lingkaran: %.2f\n\n", luas);
}

void stringManipulation() {
    char nama[50], salinan[50];
    printf("Masukkan nama Anda: ");
    scanf("%s", nama);
    strcpy(salinan, nama);
    printf("Nama yang dimasukkan: %s\n", nama);
    printf("Salinan nama: %s\n\n", salinan);
}

int main() {
    int pilihan;
    do {
        printf("Pilih Program:\n");
        printf("1. Hello World\n");
        printf("2. Input User\n");
        printf("3. Variabel dan Bilangan\n");
        printf("4. Menghitung Luas Lingkaran\n");
        printf("5. String Manipulation\n");
        printf("0. Keluar\n");
        printf("Masukkan pilihan: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1: helloWorld(); break;
            case 2: inputUser(); break;
            case 3: variabelBilangan(); break;
            case 4: luasLingkaran(); break;
            case 5: stringManipulation(); break;
            case 0: printf("Keluar dari program.\n"); break;
            default: printf("Pilihan tidak valid. Coba lagi.\n");
        }
    } while (pilihan != 0);
    
    return 0;
}










