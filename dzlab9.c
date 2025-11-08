#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    char simvol;
    int verh, niz, h;

    printf("Символ: ");
    scanf(" %c", &simvol);

    printf("Верхнее основание: ");
    scanf("%d", &verh);

    printf("Нижнее основание: ");
    scanf("%d", &niz);

    printf("Высота: ");
    scanf("%d", &h);

    printf("\n");

    for (int i = 0; i < h; i++) {
        int current_width = verh + (niz - verh) * i / h;
        int spaces = (niz - current_width) / 2;

        for (int j = 0; j < spaces; j++)
            printf(" ");

        for (int j = 0; j < current_width; j++)
            printf("%c", simvol);

        printf("\n");
    }

    return 0;

}
