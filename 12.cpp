#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    const size_t LIM = 500;

    int i = 1, divisors = 1;
    do {
        int num = i * (i + 1) / 2;
        cout << i << ": " << num;
        unordered_map<int, int> curr; // Find prime factorization
        for (int j = 2; j * j < i * (i + 1) / 2; j++) {
            while (num % j == 0) {
                curr[j]++;
                num /= j;
            }
        }
        if (num > 1) curr[num]++;  // leftover prime

        divisors = 1;
        for (const auto & [ key, value ]: curr) {
            divisors *= (value + 1);
        }
        cout << " has " << divisors << endl;
        i++;
    } while (divisors < LIM);

    i--;
    cout << i * (i + 1) / 2;

    return 0;
}