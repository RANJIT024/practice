#include <iostream>
#include <climits>
#include <string>

using namespace std;

int getMinimumSum(int num) {
    string str = to_string(num);
    int n = str.length();
    int minSum = INT_MAX;

    // Try splitting at every position
    for (int i = 1; i < n; i++) {
        string part1 = str.substr(0, i);
        string part2 = str.substr(i);

        // Convert to integer, handling leading zeros correctly
        int num1 = stoi(part1);
        int num2 = stoi(part2);

        minSum = min(minSum, num1 + num2);
    }

    return minSum;
}

int main() {
    int num;
    cout << "Enter num: ";
    cin >> num;

    cout << "Minimum sum = " << getMinimumSum(num) << endl;
    return 0;
}
