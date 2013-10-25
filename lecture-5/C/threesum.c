#include <stdio.h>

#define N 8

/* Threesum brute force algorithm */


int count(int *a, int* result) {
    printf("%d", N);
    int c = 0;
    int i, j, k;
    for (i = 0; i < N; i++) {
        for (j = (i+1); j < N; j++) {
            for (k = (j+1); k < N; k++) {
                if (a[i] + a[j] + a[k] == 0) {
                    c++;
                }
            }
        }
    }
    *result = c;
    return c;
    
}


int main() { 
    int result;
    int a[N];
    int i = 0;

    int num;
    FILE *fr;

    fr = fopen("../8ints.txt", "r");
    while (fscanf(fr, "%d", &num) > 0) {
        printf("%d\n", num);
        a[i] = num;
        i++;
    }
    fclose(fr);
    printf("\n\nStarting now!\n\n");
    count(a, &result);
    printf("\nFinished with result: %d\n", result);
    return 0;
}
