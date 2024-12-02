#include<stdio.h>
void remove_duplicates(int L[], int* n) {
    int i, j, k;
    for (i = 0; i < *n; i++) {
        for (j = i + 1; j < *n; j++) {
            if (L[i] == L[j]) {
                for (k = j; k < *n - 1; k++) {
                    L[k] = L[k + 1];
                }
                (*n)--;
                j--;
            }
        }
    }
}