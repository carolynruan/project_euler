#include <iostream>
#include <vector>
using namespace std;

int main() {
    int lim = 10001;

    vector<long long> primes;
    long long i = 2;
    while (primes.size() < lim) {
        bool isPrime = true;
        for (long long p: primes) {
            if (i % p == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            primes.push_back(i);
        i++;
    }

    cout << primes.back();

    return 0;
}