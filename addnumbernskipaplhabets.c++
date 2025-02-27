#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    int sum = 0;

    cout << "Enter the input: ";
    getline(cin, input); // Read the entire line of input

    for (char ch : input) {
        if (isdigit(ch)) { // Check if the character is a digit
            sum += ch - '0'; // Convert character to integer and add to sum
        }
    }

    cout << "Sum of numbers: " << sum << endl;
    return 0;
}
