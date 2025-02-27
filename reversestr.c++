#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    // Take input from the user
    cout << "Enter a string: ";
    cin >> str;

    int i = 0;
    int j = str.length() - 1;

    while (i < j) {
        swap(str[i], str[j]);
        i++;
        j--;
    }


    cout << "Reversed string: " << str << endl;

    return 0;
}
