#include <iostream>
using namespace std;


int main() {
    int a = 8, b = 9;
    int result = 0;
    for (int i = 0; i < b; ++i) {
        result += a;
    }

    cout << "The result of " << a << " multiplied by " << b << " is: " << result << endl;

    return 0;
}
