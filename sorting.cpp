#include <iostream>
#include<cmath>

void merge(int* A, int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;

    

    //create array


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
