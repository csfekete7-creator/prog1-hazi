#include <stdio.h>
#include "prog1.h"



int char_count(string s, char c) {

    int count = 0;

    for (int i = 0; s[i] != '\0'; i++) {

        if (s[i] == c) {

            count = count + 1;
        }
    }
    return count ;
}


int main(){

    int eredmeny1 = char_count("Abba", 'b');
    printf("%d\n",eredmeny1);

    int eredmeny2 = char_count("Abba", 'a');
    printf("%d\n",eredmeny2);

    int eredmeny3 = char_count("Abba", 'x') ;
    printf("%d\n",eredmeny3);


    return 0;
}