#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string input = "s 4 r 5 m 6";
    vector<int> numbers;
    vector<int> positions;

    // Extract numbers and store their positions
    for (int i = 0; i < input.length(); i++) {
        if (isdigit(input[i])) {
            numbers.push_back(input[i] - '0');  // Convert char to int
            positions.push_back(i);
        }
    }

    // Sort numbers in descending order
    sort(numbers.rbegin(), numbers.rend());

    // Replace sorted numbers in original positions
    int index = 0;
    for (int pos : positions) {
        input[pos] = numbers[index++] + '0';  // Convert int back to char
    }

    // Output the modified string
    cout << input << endl;

    return 0;
}
