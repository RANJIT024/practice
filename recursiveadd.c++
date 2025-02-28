#include <iostream>

void recursiveFunction(int a, int b) {
    if (a == 0) {  // Base case
        std::cout << "Final values: a = " << a << ", b = " << b << std::endl;
        return;
    }
    
    std::cout << "a = " << a << ", b = " << b << std::endl;
    recursiveFunction(a - 1, b + 1);  // Recursive call with updated values
}

int main() {
    int a = 4, b = 5;
    recursiveFunction(a, b);
    return 0;
}
