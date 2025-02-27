#include <iostream>

using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Elements at even elements: ";
    for (int i = 0; i < size; i ++) {
        if(arr[i]%2==0){
        cout << arr[i] << " ";
        }
    }

    return 0;
}
// 3rd Q