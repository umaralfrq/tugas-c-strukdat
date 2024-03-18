#include <stdio.h>
#include <string.h>

int HurufA(const char *string) {
    int HitungA = 0;
    for (int i = 0; string[i] != '\0'; ++i) {
        if (string[i] == 'A' || string[i] == 'a') {
            HitungA++;
        }
    }
    return HitungA;
}

int main() {
    char nama[100];
    printf("Masukkan nama: ");
    fgets(nama, sizeof(nama), stdin);

    if (nama[strlen(nama) - 1] == '\n') {
        nama[strlen(nama) - 1] = '\0';
    }

    int count = HurufA(nama);

    printf("Banyaknya huruf 'A' pada nama %s: %d\n", nama, count);

    return 0;
}
