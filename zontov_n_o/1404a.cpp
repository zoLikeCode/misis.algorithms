#include <iostream>
#include <cmath>
#include <algorithm>

void solve()
{
    int a, b;
    std::cin >> a >> b;
    std::string s;
    std::cin >> s;
    for (int times = 0; times < 2; times++) {
        for (int i = 0; i < (int) s.size(); i++) {
            int j = (int) s.size() - i - 1;
            if (s[i] != '?') {
                if (s[j] == '?') {
                    s[j] = s[i];
                } else if (s[i] != s[j]) {
                    std::cout << "-1" << std::endl;
                    return;
                }
            }
        }
        std::reverse(s.begin(), s.end());
    }
    a -= std::count(s.begin(), s.end(), '0');
    b -= std::count(s.begin(), s.end(), '1');
    int ques = std::count(s.begin(), s.end(), '?');
    bool emptyMid = (s.size() % 2 == 1 && s[s.size() / 2] == '?');
    if (a < 0 || b < 0 || a + b != ques || (emptyMid && a % 2 == 0 && b % 2 == 0)) {
        std::cout << "-1" << std::endl;
        return;
    }
    if (a % 2 == 1 || b % 2 == 1) {
        int i = s.size() / 2;
        if (s[i] != '?') {
            std::cout << "-1" << std::endl;
            return;
        }
        s[i] = (a % 2 == 1 ? '0' : '1');
        if (a % 2 == 1) {
            a--;
        } else {
            b--;
        }
    }
    if (a % 2 == 1 || b % 2 == 1) {
        std::cout << "-1" << std::endl;
        return;
    }
    for (int i = 0; i < (int) s.size(); i++) {
        if (s[i] == '?') {
            int j = s.size() - i - 1;
            if (a > 0) {
                a -= 2;
                s[i] = s[j] = '0';
            } else {
                b -= 2;
                s[i] = s[j] = '1';
            }
        }
    }
    std::cout << s << std::endl;
}

int main()
{
    int tt = 0;
    std::cin >> tt;
    while(tt--) {
        solve();
    }
    return 0;
}
