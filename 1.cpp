#include <iostream>
using namespace std;

int series(int lim, int factor) {
    int k = (lim - 1) / factor;
    return factor * k * (k + 1) / 2;
}

int main() {
    const size_t LIMIT = 1000, THREE = 3, FIVE = 5;
    int sum = series(LIMIT, THREE) + series(LIMIT, FIVE) - series(LIMIT, THREE * FIVE);

    cout << sum;
}