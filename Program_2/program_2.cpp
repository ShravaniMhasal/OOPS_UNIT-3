#include <iostream>
using namespace std;

// area of a square (side * side)
int calculateArea(int side) {
    return side * side;
}

// area of a rectangle (length * width)
int calculateArea(int length, int width) {
    return length * width;
}

// area of a circle using pi * r^2
double calculateArea(double radius) {
    constexpr double PI = 3.141592653589793;
    return PI * radius * radius;
}

int main() {
    // checking all three versions of calculateArea

    cout << "Square Area: " << calculateArea(5) << '\n';       // 5*5 = 25
    cout << "Rectangle Area: " << calculateArea(6, 4) << '\n'; // 6*4 = 24
    cout << "Circle Area: " << calculateArea(2.0) << '\n';     // pi * 2^2 ≈ 12.566

    return 0;
}