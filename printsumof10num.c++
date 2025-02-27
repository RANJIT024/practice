#include <iostream>

using namespace std;

int main() {
    int sum = 0, num;

    cout << "Enter 10 numbers: " << endl;

    for (int i = 1; i <= 10; i++) {
        cin >> num;
        sum += num; // Adding each number to sum
    }

    cout << "Sum of 10 numbers: " << sum << endl;

    return 0;
}
// for o(1) using n*n+1 / 2 == binomial series  expansion 1q