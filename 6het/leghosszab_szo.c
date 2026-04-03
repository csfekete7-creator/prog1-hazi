#include <stdio.h>
#include <string.h>

int main() {

    char szo[100];

    int db = 0, max_hossz = 0;

    printf("Adj meg szavakat '*' végjelig!\n");

    while (1) {

        printf("Szó: ");

        fgets(szo, 100, stdin);

        szo[strcspn(szo, "\n")] = 0; 

        if (strcmp(szo, "*") == 0) break;

        db++;

        int hossz = strlen(szo);

        if (hossz > max_hossz) max_hossz = hossz;
    }

    printf("%d db szót adtál meg. A leghosszabb szó % d karakterből áll.\n", db, max_hossz);
    
    return 0;
}