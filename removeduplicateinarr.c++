#include <iostream>
using namespace std;


void removeElement(int arr[], int& size, int index) {
    for (int i = index; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    size--; 
}

void removeDuplicates(int arr[], int& size) {

    for (int i = 0; i < size; ++i) {

        for (int j = i + 1; j < size; ++j) {

            if (arr[i] == arr[j]) {
                removeElement(arr, size, j);
                j--; 
            }
        }
    }
}

int main() {

    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]); 

 
    removeDuplicates(arr, size);

    
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
