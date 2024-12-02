#include<stdio.h>
int kth_largest(int L[], int n, int k) {
    int i, j, temp;
    for (i = 0; i < k; i++) {
        for (j = i + 1; j < n; j++) {
            if (L[i] < L[j]) {
                temp = L[i];
                L[i] = L[j];
                L[j] = temp;
            }
        }
    }
    return L[k - 1];
}