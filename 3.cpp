#include <iostream>
using namespace std;

int main() {
    long long N = 600851475143;
    long long i = 2, factor = 1;
    while (N > 1) {
        while (N % i == 0) {
            N /= i;
            factor = i;
        }
        i++;
    }

    cout << factor;
}