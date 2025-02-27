#include <iostream>
using namespace std;

int main() {
    int arr[] = {7, 9, 9}; 
    int size = sizeof(arr) / sizeof(arr[0]);  

    arr[size - 1] += 1;

    cout << "Updated array: {";
    for (int i = 0; i < size; ++i) {
        cout << arr[i];
        if (i != size - 1) {
            cout << ", ";
        }
    }
    cout << "}" << endl;

    return 0;
}
