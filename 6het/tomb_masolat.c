#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;

    printf("Hány db számot szeretne bevinni?\n");

    scanf("%d", &n);

    int eredeti[n];
    int masolat[n];

    for (int i = 0; i < n; i++) {

        printf("%d. szám: ", i + 1);

        scanf("%d", &eredeti[i]);

        masolat[i] = abs(eredeti[i]);
    }
    

    printf("A bevitt számok abszolútértékei: ");

    for (int i = 0; i < n; i++) {

        printf("%d%s", masolat[i], (i == n - 1) ? "" : ", ");
    }
    
    printf("\nA megadott számok: ");

    for (int i = 0; i < n; i++) {

        printf("%d%s", eredeti[i], (i == n - 1) ? "" : ", ");
    }

    printf("\n");

    return 0;
}