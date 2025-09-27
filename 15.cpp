# include <iostream>
using namespace std;

int main() {
    const int N = 20;
    long long combos = 1;

    for (int i = 1; i <= N; i++) {
        combos = combos * (N + i) / i;
    }

    cout << combos << endl;
    return 0;
}