#include "dot.h"
#include <iostream>
using namespace std;
class Vector {
public:
    float scalar_product_of_vectors() {
            float ln1, ln2, cosine;
            cout << "Enter the length of the first vector: ";
            cin >> ln1;
            cout << "Enter the length of the second vector: ";
            cin >> ln2;
            cout << "Enter the cosine value between the vectors: ";
            cin >> cosine;
            return ln1*ln2*cosine;
    }
}d1;



int main() {
    float value = d1.scalar_product_of_vectors();
    cout << value;
    return 0;
}