#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    // Take input from the user
    cout << "Enter a string: ";
    cin >> str;

    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        // Swap characters
        swap(str[i], str[n - i - 1]);
    }

    // Output the reversed string
    cout << "Reversed string: " << str << endl;

    return 0;
}
