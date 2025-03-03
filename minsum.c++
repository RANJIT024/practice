#include <iostream>
#include <algorithm>
using namespace std;

int getMinimumSum(int num) {
    int digits[10], count = 0;

    // Extract digits from the number
    while (num > 0) {
        digits[count++] = num % 10;
        num /= 10;
    }

    // Sort digits in ascending order
    sort(digits, digits + count);

    int num1 = 0, num2 = 0;

    // Distribute digits optimally
    for (int i = 0; i < count; i++) {
        if (i % 2 == 0)
            num1 = num1 * 10 + digits[i];  // Build first number
        else
            num2 = num2 * 10 + digits[i];  // Build second number
    }

    return num1 + num2;
}

int main() {
    int num;
    cout << "Enter num: ";
    cin >> num;
    cout << "Minimum sum = " << getMinimumSum(num) << endl;
    return 0;
}
