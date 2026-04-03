#include <stdio.h>

int main() {

    int dupe[100] = {0};

    int szam = 0;
    int db = 0;

    printf("Adj meg 0 végjelig számokat [1, 99] intervallumból!\n");

    while (scanf("%d", &szam) && szam != 0) {

        if (szam < 1 || szam > 99) {

            printf("Ez a szám kívül esik az elfogadható intervallumon >:( !\n");

        } else if (dupe[szam] == 0) {

            dupe[szam] = 1;

            db++;
        }
    }

    printf("%d db különböző szám lett megadva.\nEzek: ", db);

    for (int i = 1; i <= 99; i++) {

        if (dupe[i]) printf("%d ", i);
    }

    printf("\n");

    return 0;
}