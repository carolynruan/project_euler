#include <iostream>
#include <string>
using namespace std;

int main() {
    string num = "2";
    for (size_t pow = 1; pow < 1000; pow++) {
        string next = "";
        int carry = 0;
        // Double the number in form of string
        for (int i = num.length() - 1; i >= 0; i--) {
            int dig = (num[i] - '0') * 2 + carry;
            next = to_string(dig % 10) + next;
            carry = dig / 10;
        }
        next = to_string(carry) + next;
        num = next;
    }

    int sum = 0;
    for (int i = 0; i < num.length(); i++) {
        sum += (num[i] - '0');
    }
    cout << sum;

    return 0;
}