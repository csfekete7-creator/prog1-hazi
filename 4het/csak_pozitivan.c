#include <stdio.h>

void absz(int m, int t[]) {

    for (int i = 0; i < m; ++i) {

        if (t[i] < 0){

            t[i] = -t[i];

        }
        

    }

}


void print_tomb(int m, int t[]) {

    for (int i = 0; i < m; ++i)

        printf("%d ", t[i]);

        printf("\n");
}

int main() {

    int meret = 5;
    int szamok[] = {-5, 12, -1, 0, -8};
    
    printf("Elotte: "); 
    print_tomb(meret, szamok);

    absz(meret, szamok);

    printf("Utana:  "); 
    print_tomb(meret, szamok);
    
    return 0;
}