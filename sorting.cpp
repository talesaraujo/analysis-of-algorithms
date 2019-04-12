#include <iostream>
#include <cmath>

void merge(int* A, int p, int q, int r) {
    int i, j, k;
    int n1 = q - p + 1;
    int n2 = r - q;
    int L[n1], R[n2];

    for (i = 0; i < n1; i++) {
        L[i] = A[p + i - 1];
    }
    for (j = 0; j < n2; j++) {
        R[j] = A[q + j];
    }

    j = 1;
    i = j;
    k = p;

    while ((i != (n1+1)) && (j != (n2+1))) {
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

    if (i == (n1+1)) {
        for (int m = j)
    }
}


void mergesort(int* A, int p, int r) {
    int q;

    if (p < r) {
        q = floor(p+r/2);

        mergesort(A, p, q);
        mergesort(A, q+1, r);
        merge(A, p, q, r);
    }
}




int main(int argc, char const *argv[]){
    float n = 4.5;


    return 0;
}
