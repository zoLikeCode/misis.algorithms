#include <iostream>
#include <string>

void solve() {
    int n = 0;
    std::cin >> n;
    std::string s;
    std::cin >> s;

    int pairs = 0;
    for (int i = 1; i < n; i += 1) {
        if (s[i - 1] == s[i])
            pairs += 1;
    }
    std::cout << pairs << std::endl;
}

int main() {
    solve();
    return 0;
}