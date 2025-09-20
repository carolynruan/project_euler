#include <iostream>
using namespace std;

int fib(int a, int b, int lim) {
    if (a >= lim) 
        return 0;
    
    if (a % 2 == 0) 
        return a + fib(b, a + b, lim);
    return fib(b, a + b, lim);
}

int main() {
    cout << fib(1, 2, 4000000);
}