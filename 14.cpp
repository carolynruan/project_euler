#include <iostream>
using namespace std;

int main() {
    const int LIM = 1000000;
    int bestLen = 0, bestStart = 1;
    for (int i = 2; i < LIM; i++) {
        long long num = i;
        int len = 1;
        while (num != 1) {
            if (num % 2 == 0) {
                num /= 2;
            } else {
                num = 3 * num + 1;
            }
            len++;
        }

        if (len > bestLen) {
            bestLen = len;
            bestStart = i;
        }
    }

    cout << bestStart << " has len " << bestLen << endl;
    return 0;
}