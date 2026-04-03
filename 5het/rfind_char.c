#include <stdio.h>
#include "prog1.h"
#include <string.h>


int rfind_char(string s, char c) {

    int len = strlen(s);

    for (int i = len - 1; i >= 0; i--) {

        if (s[i] == c) {

            return i; 

        }

    }

    return -1; 
}

int main(){

    int eredmeny1 = rfind_char("Abba", 'b');
    printf("%d\n",eredmeny1);

    int eredmeny2 = rfind_char("Abba", 'a');
    printf("%d\n",eredmeny2);

    int eredmeny3 = rfind_char("Abba", 'x');
    printf("%d\n",eredmeny3);

    int eredmeny4 = rfind_char("Aladar", 'a');
    printf("%d\n",eredmeny4);





    return 0;
}