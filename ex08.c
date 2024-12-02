#include<stdio.h>
void merge(int L1[], int n1, int L2[], int n2, int merged[]) {
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (L1[i] < L2[j]) {
            merged[k++] = L1[i++];
        } else {
            merged[k++] = L2[j++];
        }
    }
    while (i < n1) {
        merged[k++] = L1[i++];
    }
    while (j < n2) {
        merged[k++] = L2[j++];
    }
}