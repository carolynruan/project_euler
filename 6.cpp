#include <iostream>
using namespace std;

int main() {
    const int N = 100;
    long long sum_squares = N * (N+1) * (2*N+1) / 6;
    long long square_sum = (N * (N+1) / 2) * (N * (N+1) / 2);
    cout << abs(sum_squares - square_sum);

    return 0;
}