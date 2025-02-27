#include <iostream>

using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Elements at even indices: ";
    for (int i = 0; i < size; i += 2) {
        cout << arr[i] << " ";
    }

    return 0;
}
// 2Q