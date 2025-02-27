#include <iostream>

using namespace std;

int main() {
    int num = 1234, sum = 0;

    // Sum the digits of the number until it becomes a single digit
    do {
        sum = 0;  
        while (num > 0) {
            sum += num % 10;  
            num /= 10;         
        }
        num = sum; 
    } while (sum >= 10);  

    cout << "Sum of digits: " << sum;

    return 0;
}



//q4
// n: 1234 -> 1+2+3+4 -> 10 -> 1+0 -> 0