#include <stdio.h>

int main() {

    int a;
    printf("Kérlek add meg a téglalap A oldalának hosszát \n");
    scanf("%d", &a);

    printf("A téglalap A oldala: %d\n", a);

    int b;
    printf("Kérlek add meg a téglalap B oldalának hosszát \n");
    scanf("%d", &b);


    printf("A téglalap B oldala: %d\n", b);

    int terulet = a * b;
    printf("A téglalap területe: %d * %d = %d\n", a, b,terulet);

    int kerulet = 2 * (a + b);
    printf("A téglalap kerölete: %d + %d * 2 = %d\n", a, b, kerulet);


    return 0;

}