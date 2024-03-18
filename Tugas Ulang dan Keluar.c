#include <stdio.h>

int main() {
    int pilihan;

    do {
        printf("MENU\n");
        printf("1. Ulang\n");
        printf("2. Keluar\n");
        printf("Pilihan: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                printf("Anda memilih Ulang\n");
                break;
            case 2:
                printf("Anda memilih Keluar\n");
                break;
            default:
                printf("Pilihan tidak valid. Silakan masukkan 1 atau 2.\n");
        }
    } while (pilihan != 2);

    return 0;
}
