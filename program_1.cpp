#include <iostream>
using namespace std;

// adding two int numbers
int add(int first, int second) {
    return first + second;
}

// adding two double numbers (for decimal values)
double add(double first, double second) {
    return first + second;
}

// adding three int numbers
int add(int first, int second, int third) {
    return first + second + third;
}

int main() {
    // testing all the add functions here

    cout << "Sum of two integers: " << add(10, 20) << '\n';       // should give 30
    cout << "Sum of two doubles: " << add(2.5, 3.7) << '\n';      // should give 6.2
    cout << "Sum of three integers: " << add(10, 20, 30) << '\n'; // should give 60

    return 0;
}