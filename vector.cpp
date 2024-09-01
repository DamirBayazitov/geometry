#include "vector.h"
#include <iostream>
using namespace std;

float Vector::scalar_product_of_vectors() {
        float ln1, ln2, cosine;
        cout << "Enter the length of the first vector: ";
        cin >> ln1;
        cout << "Enter the length of the second vector: ";
        cin >> ln2;
        cout << "Enter the cosine value between the vectors: ";
        cin >> cosine;
        return ln1*ln2*cosine;
}




int main() {
    Vector d1;
    float value = d1.scalar_product_of_vectors();
    cout << value;
    return 0;
}