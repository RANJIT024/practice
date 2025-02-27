#include <iostream>
using namespace std;

int main() {
    int a = 8, b = 9;

    // Swapping using multiplication and division
    a = a * b;  // a becomes 72 (8 * 9)
    b = a / b;  // b becomes 8 (72 / 9)
    a = a / b;  // a becomes 9 (72 / 8)

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
