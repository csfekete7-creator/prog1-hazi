#include <stdio.h>

void angol_abc(char tomb[]) {

    for (int i = 0; i < 26; i++) {

        tomb[i] = 'a' + i;
    }
    tomb[26] = '\0'; 
}

int main() {

    char abc[27];

    angol_abc(abc);

    printf("%s\n", abc);

    return 0;
}