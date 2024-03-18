#include <stdio.h>
#include <string.h>

int main() {
    char input[100];

    printf("Masukan: ");
    scanf("%s", input);

    int length = strlen(input);

    for (int i = 0; i < length; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c ", input[j]);
        }
        printf("\n");
    }

    return 0;
}
