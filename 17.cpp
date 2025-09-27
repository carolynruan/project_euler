#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

unordered_map<int, string> sd = {
    {1,"one"},{2,"two"},{3,"three"},{4,"four"},{5,"five"},
    {6,"six"},{7,"seven"},{8,"eight"},{9,"nine"}
};

unordered_map<int, string> dd2 = {
    {10,"ten"},{11,"eleven"},{12,"twelve"},{13,"thirteen"},{14,"fourteen"},
    {15,"fifteen"},{16,"sixteen"},{17,"seventeen"},{18,"eighteen"},{19,"nineteen"}
};

unordered_map<int, string> dd1 = {
    {2,"twenty"},{3,"thirty"},{4,"forty"},{5,"fifty"},
    {6,"sixty"},{7,"seventy"},{8,"eighty"},{9,"ninety"}
};

// helper: return letter count (no spaces/hyphens)
int wordLength(int n) {
    if (n == 1000) return string("onethousand").size();

    int len = 0;
    if (n >= 100) {
        len += sd[n/100].size() + string("hundred").size();
        if (n % 100 != 0) len += string("and").size();
        n %= 100;
    }

    if (n >= 20) {
        len += dd1[n/10].size();
        n %= 10;
    }

    if (n >= 10) {
        len += dd2[n].size();
        return len;
    }

    if (n > 0) {
        len += sd[n].size();
    }
    return len;
}

int main() {
    long long total = 0;
    for (int i = 1; i <= 1000; i++) {
        total += wordLength(i);
    }
    cout << total << endl;
    return 0;
}