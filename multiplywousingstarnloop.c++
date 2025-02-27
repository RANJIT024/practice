#include <iostream>
using namespace std;

int multiply(int a, int b) {
    if (b == 0) {
        return 0;
    }

    return a + multiply(a, b - 1);
}

int main() {
    int a = 8, b = 9;

    int result = multiply(a, b);
    
    cout << "The result of " << a << " multiplied by " << b << " is: " << result << endl;

    return 0;
}
