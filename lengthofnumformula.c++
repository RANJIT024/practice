#include <iostream>
#include <cmath> // To use log10 function
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Handle the case when number is 0
    if (number == 0) {
        cout << "Length: 1" << endl;
    } else {
        // Apply the formula to find the number of digits
        int length = 1 + static_cast<int>(log10(number));
        cout << "Length: " << length << endl;
    }

    return 0;
}
// Q6