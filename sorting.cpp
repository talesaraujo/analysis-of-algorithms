#include <iostream>
#include <cmath>

void merge(int* A, int p, int q, int r) {
    int i, j, k, m;
    int n1 = q - p + 1;
    int n2 = r - q;
    int L[n1], R[n2];

    // Set auxiliar L and R arrays
    for (i = 0; i < n1; i++) {
        L[i] = A[p + i - 1];
    }
    for (j = 0; j < n2; j++) {
        R[j] = A[q + j];
    }

    j = 0;
    i = j;
    k = p;

    while ((i != n1) && (j != n2)) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        }
        else {
            A[k] = R[j];
            j++;
        }
        k++;
    }

    /*
        When it's done with an array, just copy all the elements from the other to
        the original (no sentinels required)
    */
    if (i == n1) {
        for (m = j; m<n2; m++) {
            A[k] = R[m];
            k++;
        }
    }
    if (j == n2) {
        for (m = i; m < n1; m++) {
            A[k] = L[m];
            k++;
        }
    }
}

void mergesort(int* A, int p, int r) {
    int q;

    if (p < r) { //Check for the base case
        q = floor(p+r/2); // Divide step

        mergesort(A, p, q); // Conquer step
        mergesort(A, q+1, r); // Conquer step
        merge(A, p, q, r); // Conquer step
    }
}


int main(int argc, char const *argv[]){
    float n = 4.5;


    return 0;
}
