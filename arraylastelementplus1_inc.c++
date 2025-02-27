#include <iostream>
using namespace std;

void addOneToArray(int arr[], int size) {
    arr[size - 1] += 1;  

    for (int i = size - 1; i > 0; --i) {
        if (arr[i] == 10) {
            arr[i] = 0;  
            arr[i - 1] += 1;  
        }
    }
}

int main() {
 
    int arr[] = {7, 9, 9}; 
    int size = sizeof(arr) / sizeof(arr[0]);  

    addOneToArray(arr, size);

    cout << "Updated array: {";
    for (int i = 0; i < size; ++i) {
        cout << arr[i];
        if (i != size - 1) cout << ", ";
    }
    cout << "}" << endl;

    return 0;
}
