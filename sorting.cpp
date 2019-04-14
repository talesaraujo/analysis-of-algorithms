#include <iostream>
#include <cmath>

void merge(int* A, int p, int q, int r) {
    int i, j, k, m;
    int n1 = q - p + 1;
    int n2 = r - q;
    int L[n1], R[n2];

    // Set auxiliar L and R arrays
    for (i = 0; i < n1; i++) {
        L[i] = A[p + i];
    }
    for (j = 0; j < n2; j++) {
        R[j] = A[q + j + 1];
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
        q = floor((p+r)/2); // Divide step

        mergesort(A, p, q); // Conquer step
        mergesort(A, q+1, r); // Conquer step
        merge(A, p, q, r); // Conquer step
    }
}


void print_arr(int* A, int n) {
    int i;

    std::cout << "[" ;

    for (i = 0; i < n; i++) {
        if (i != (n-1))
            std::cout << A[i] << ", " ;
        else {
            std::cout << A[i];
        }
    }

    std::cout << "]" ;
}

int main(int argc, char const *argv[]){

    int A[8] = {14, 7, 3, 12, 9, 11, 6, 2};

    std::cout << "Unsorted array\n";
    print_arr(A, 8);

    mergesort(A, 0, 7);

    std::cout << "\nSorted array\n";
    print_arr(A, 8);

    return 0;
}
