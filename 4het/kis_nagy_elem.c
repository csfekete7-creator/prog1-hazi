#include <stdio.h>

int get_min(int n, int t[]) {

    int min = t[0];

    for (int i = 1; i < n; ++i) {

        if (t[i] < min){

            min = t[i];

        }

    }

    return min;

}

int get_max(int n, int tomb[]) {

    int max = tomb[0];

    for (int i = 1; i < n; ++i) {

        if (tomb[i] > max){

            max = tomb[i];

        } 

    }
    return max;
}

int main() {

    int adatok[] = {10, 2, 8, 1, 5};

        int min = get_min(5, adatok);

        int max = get_max(5, adatok);

        printf("Min: %d, Max: %d\n", min, max);


    return 0;
}