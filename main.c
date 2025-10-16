#include <stdio.h>

void sapaDunia() {
    printf("Hello, World from a function!\n");
}

int main(void) {
    char nama[50];
    printf("Masukkan nama Anda: ");
    scanf("%s", nama);
    printf("Halo, %s! Selamat datang di aplikasi konsol.\n", nama);
    return 0;
}