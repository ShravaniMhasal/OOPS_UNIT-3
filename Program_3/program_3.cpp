#include <iostream>
using namespace std;

class Number {
private:
    int value; // stores the number

public:
    // constructor, explicit so no accidental int->Number conversion
    explicit Number(int givenValue) : value(givenValue) {}

    // unary minus operator overload (makes -first work)
    Number operator-() const {
        return Number(-value);
    }

    // just prints the value
    void display() const {
        cout << value << '\n';
    }
};

int main() {
    Number first(25);
    Number second = -first; // using overloaded unary minus here

    cout << "Original value: ";
    first.display();

    cout << "Negated value: ";
    second.display();

    return 0;
}