#include <iostream>
#include <vector>
using namespace std;

int main() {
    int lim = 2000000;

    vector<long long> primes;
    long long i = 2;
    long long sum = 0;
    while (primes.size() == 0 || primes.back() < lim) {
        bool isPrime = true;
        for (long long p: primes) {
            if (i % p == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            primes.push_back(i);
            if (i < lim) sum += i;
        }
        i++;
    }

    cout << sum;

    return 0;
}