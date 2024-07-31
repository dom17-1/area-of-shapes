#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int shape, radius, base, height;
    double side, area;

    cout << "Enter the shape number (1: circle, 2: rectangle, 3: triangle, 4: square): ";
    cin >> shape;

    switch (shape) {
        case 1:
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            area = M_PI * pow(radius, 2);
            break;
        case 2:
            cout << "Enter the base and height of the rectangle: ";
            cin >> base >> height;
            area = base * height;
            break;
        case 3:
            cout << "Enter the base and height of the triangle: ";
            cin >> base >> height;
            area = 0.5 * base * height;
            break;
        case 4:
            cout << "Enter the side length of the square: ";
            cin >> side;
            area = pow(side, 2);
            break;
        default:
            cout << "Invalid shape number." << endl;
            return 1;
    }

    cout << "The area of the shape is: " << area << endl;

    return 0;
}