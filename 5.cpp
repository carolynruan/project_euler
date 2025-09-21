#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int lim = 20;

    unordered_map<int, int> primes;
    for (int i = 2; i <= lim; i++) {
        int num = i;
        unordered_map<int, int> curr; // Find prime factorization
        for (const auto & [ key, value ]: primes) {
            while (num % key == 0) {
                curr[key]++;
                num /= key;
            }
        }

        if (num != 1) { // Is prime
            primes[num] = 1;
        } else { // Update max prime factorization needed
            for (const auto & [ key, value ]: curr) {
                primes[key] = max(primes[key], value);
            }
        }
    }

    int prod = 1; // Multiply out max prime factorization
    for (const auto & [ key, value ]: primes) {
        for (int i = 0; i < value; i++)
            prod *= key;
    }

    cout << prod;
}