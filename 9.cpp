#include <iostream>
using namespace std;

int main() {
    const size_t SUM = 1000;
    for (int a = 1; a < SUM / 3; a++) {
        for (int b = a; b < SUM - a - b; b++) {
            int c = SUM - a - b;
            if (a * a + b * b == c * c) {
                cout << a * b * c;
                break;
            }
        }
    }

    return 0;
}