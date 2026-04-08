#include <stdio.h>

void kiir(int n, int tomb[]) {

    for (int i = 0; i < n; ++i) {

        printf("%d", tomb[i]);

        if (i < n - 1){

            printf(", ");
        } 
        
    }
    printf("\n");

}

int main() {

    int tomb[] = {4, 7, 34, 23, 67};

    kiir(5, tomb);

    return 0;
}