#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    // Take input from the user
    cout << "Enter a string: ";
    cin >> str;

    // Initialize two pointers, one at the start and one at the end
    int i = 0;
    int j = str.length() - 1;

    // Reverse the string using while loop
    while (i < j) {
        // Swap the characters
        swap(str[i], str[j]);

        // Move the pointers towards the center
        i++;
        j--;
    }

    // Output the reversed string
    cout << "Reversed string: " << str << endl;

    return 0;
}
