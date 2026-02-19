#include <stdio.h>
//#include <math.h>

int main() {

    float pi = 3.141592;
    int r;
    printf("Adja meg a kör sgarát\n");
    scanf("%d", &r);

    printf("Az ön körének sugara %d\n", r);

    int k_terulet = (r * r) * pi;
    printf("A kör területe: %d * %d * %f = %d\n", r, r, pi, k_terulet);

    int k_kerulet = 2 * r * pi;
    printf("A kör kerölete: %f * %d * 2 = %d\n", r, pi, k_kerulet);


    return 0;

}