#include <iostream>
#include <string>

void solve() {
    std::string s;
    std::cin >> s;
    int n = s.length();

    if (n == 1) {
        std::cout << 1 << std::endl;
        return;
    }

    bool flag = false;
    for (int i = 0; i < n; i += 1) {
        if (s[i] != '?') {
            flag = true;
        }
    }

    if (!flag) {
        std::cout << n << std::endl;
        return;
    }

    int liars = 0;

    for (int iFriend = 0; iFriend < n; iFriend += 1) {
        if (s[iFriend] == '0') {
            liars = iFriend;
            break;
        } else {
            liars = n - 1;
        }
    }

    int honest = 0;
    for (int iFriend = n - 1; iFriend >= 0; iFriend -= 1) {
        if (s[iFriend] == '1') {
            honest = iFriend;
            break;
        } else {
            honest = 0;
        }
    }

    std::cout << liars - honest + 1 << std::endl;
}

int main() {
    int tt = 0;
    std::cin >> tt;
    while (tt--) solve();
    return 0;
}