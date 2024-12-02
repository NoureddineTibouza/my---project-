#include<stdio.h>

void sort(int L[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (L[j] > L[j + 1]) {
                temp = L[j];
                L[j] = L[j + 1];
                L[j + 1] = temp;
            }
        }
    }
}