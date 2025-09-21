#include <iostream>
#include <string>
using namespace std;

int main() {
    int biggestPal = 0;
    for (int i = 999; i >= 100; i--) {
        for (int j = i; j >= 100; j--) {
            int pal = i * j;
            string s = to_string(pal);
            
            int l = 0, r = s.length() - 1;
            bool isPal = true;
            while (l < r) {
                if (s[l] != s[r]) {
                    isPal = false;
                    break;
                }
                l++;
                r--;
            }

            if (isPal)
                biggestPal = max(biggestPal, pal);
        }
    }

    cout << biggestPal;
}