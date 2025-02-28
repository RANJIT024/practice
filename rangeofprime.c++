#include <iostream>
using namespace std;


bool isPrime(int num, int i) {
    if (num <= 2)
        return (num == 2) ? true : false; 
    if (num % i == 0)
        return false; 
    if (i * i > num)
        return true;  
    return isPrime(num, i + 1); 
}


void findPrimes(int* start, int* end) {
    if (*start > *end)
        return; 
    if (isPrime(*start, 2))
        cout << *start << " "; 
    *start += 1; 
    findPrimes(start, end); 
}

int main() {
    int start, end;
    cout << "Enter the start of the range: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;

    cout << "Prime numbers in the range [" << start << ", " << end << "]: ";
    findPrimes(&start, &end); // Call function using pointers
    cout << endl;

    return 0;
}