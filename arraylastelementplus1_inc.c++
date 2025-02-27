#include <iostream>
using namespace std;

void addOneToArray(int arr[], int size) {
    // Start from the last element and propagate the carry if necessary
    arr[size - 1] += 1;  // Add 1 to the last element

    // Handle carry
    for (int i = size - 1; i > 0; --i) {
        if (arr[i] == 10) {
            arr[i] = 0;  // Reset the current element to 0 if it overflows to 10
            arr[i - 1] += 1;  // Carry over to the previous element
        }
    }

    // If the first element is 10 after the carry, reset it to 0 and add a new digit at the start
    if (arr[0] == 10) {
        arr[0] = 0;
        // If you need to handle the carry across the entire number
        // (e.g., 999 + 1 => 1000), you would add another digit here.
        // In the case of static arrays, we cannot resize them.
        // But you can print overflow like this:
        cout << "Overflow! Result exceeds array size.\n";
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
