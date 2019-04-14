#include <iostream>
#include <cmath>

/*  
    Write out an algorithm that takes an array A with n elements 
    and removes the duplicate items in time O(n log n)
*/

void remove(int* A, int n) {
    int i;
    int B[n];
    int old;

    

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

    int A[8] = {7, 3, 7, 4, 1, 3, 1, 7};

    std::cout << "Unsorted array\n";
    print_arr(A, 8);

    mergesort(A, 0, 7);

    std::cout << "\nSorted array\n";
    print_arr(A, 8);

    return 0;
}
