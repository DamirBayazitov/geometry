#include "enter_coordinates.h"
#include <iostream>
using namespace std;

int* enter_coordinates() {
    float space, x, y, z;
    cout << "Enter the space you are going to use: ";
    cin >> space;
    if (space == 2) {
        int* coord = new int[2];
        cout << "Enter x value: ";
        cin >> x;
        cout << "Enter y value: ";
        cin >> y;
        coord[0] = x;
        coord[1] = y;
        return coord;
    }
    else if (space == 3) {
        int* coord = new int[3];
        cout << "Enter x value: ";
        cin >> x;
        cout << "Enter y value: ";
        cin >> y;
        cout << "Enter z value: ";
        cin >> z;
        coord[0] = x;
        coord[1] = y;
        coord[2] = z;
        return coord;
    }
    else {
        cout << "Try again\n";
        enter_coordinates();
    }
}


int main() {
    int* ptr = enter_coordinates();
    cout << ptr[0] << " " << ptr[1];
    return 0;
}