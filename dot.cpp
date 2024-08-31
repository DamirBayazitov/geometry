#include "dot.h"
#include <iostream>
#include <cmath>
using namespace std;
class dot {
public:
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
                cout << "Try again\n\n";
                enter_coordinates();
            }
        }
        void get_dot_definition() {
            cout << "A dot is defined as a location in any space and is represented by a dot (.). It does not have any length, height, shape, or size. It marks the beginning to draw any figure or shape and is labeled with capital letters.";
        }
        float get_distance(int coord[], int coord2[]) {
            int space;
            cout << "Enter the space you are going to use: ";
            cin >> space;
            if (space == 2) {
                float value = sqrt((coord[0] - coord2[0]) * (coord[0] - coord2[0]) + (coord[1] - coord2[1]) * (coord[1] - coord2[1]));
                return value;
            }
            else if (space == 3) {
                float value = sqrt((coord[0] - coord2[0]) * (coord[0] - coord2[0]) + (coord[1] - coord2[1]) * (coord[1] - coord2[1]) + (coord[2] - coord2[2]) * (coord[2] - coord2[2]));
                return value;                
            }
            else {
                cout << "Try again\n\n";
                float get_distance(int coord[], int coord2[]);
            }
        }
}d1;


