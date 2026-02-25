#include <stdio.h>

int main() {

    for (int i = 32; i <= 126; i++) {

        printf("%d: %c\n", i, (char)i);

    }

    //Kérdés: Mennyi az angol ábécé nagybetűihez tartozó ASCII értékek összege? 

    int osszeg = 0;

    for (char c = 'A'; c <= 'Z'; c++) {
        osszeg += c;
        
    }

    printf("Az angol nagybetuk ASCII ertekeinek osszege: %d\n", osszeg);

    return 0;
}
