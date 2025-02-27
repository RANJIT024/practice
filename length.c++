// enter number: 53120 length:5   Q5

#include <iostream>
#include <string>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    string numStr = to_string(number);
    cout << "Length: " << numStr.length() << endl;

    return 0;
}
