#include <stdio.h>

void reverse(int L[], int n) {
    int temp, i;
    for (i = 0; i < n / 2; i++) {
        temp = L[i];
        L[i] = L[n - i - 1];
        L[n - i - 1] = temp;
    }
}