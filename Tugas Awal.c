#include <stdio.h>

int main() {
    int MTK, Bindo, IPA, Bing, IPS;
    float RataRata;
    char HurufNilai;

    printf("Masukkan Nilai MTK = ");
    scanf("%d", &MTK);
    printf("Masukkan Nilai Bahasa Indonesia = ");
    scanf("%d", &Bindo);
    printf("Masukkan Nilai IPA = ");
    scanf("%d", &IPA);
    printf("Masukkan Nilai Bahasa Inggris = ");
    scanf("%d", &Bing);
    printf("Masukkan Nilai IPS = ");
    scanf("%d", &IPS);

    RataRata = (MTK + Bindo + IPA + Bing + IPS) / 5;

    if (RataRata == 100) {
        printf("Sempurna\n");
        HurufNilai = 'A';
    } else if (RataRata >= 90) {
        printf("Baik\n");
        HurufNilai = 'A';
    } else if (RataRata >= 80) {
        printf("B\n");
        HurufNilai = 'B';
    } else if (RataRata >= 70) {
        printf("C\n");
        HurufNilai = 'C';
    } else if (RataRata >= 60) {
        printf("D\n");
        HurufNilai = 'D';
    } else {
        printf("E\n");
        HurufNilai = 'E';
    }

    printf("Rata Rata %.2f\n", RataRata);
    printf("Nilai Berdasarkan Huruf %c\n", HurufNilai);

    return 0;
}
