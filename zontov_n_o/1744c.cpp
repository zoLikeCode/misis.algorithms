#include <iostream>
#include <string>
#include <cmath>

void solve() {
    int n = 0;
    char c;
    std::cin >> n >> c;
    std::string s;
    std::cin >> s;
    s.append(s);

    int index_for_green = 0;
    for (int i = 0; i < n; i += 1) {
        if (s[i] == 'g') {
            index_for_green = i;
            break;
        }
    }

    int ans = 0;
    int last = 0;
    for (int i = n * 2 - 1; i >= 0; i -= 1) {
        if (s[i] == 'g') {
            last = i;
        } else if (s[i] == c) {
            ans = std::max(ans, last - i);
        }
    }
    std::cout << ans << std::endl;


}

int main() {
    int tt = 0;
    std::cin >> tt;
    while (tt--) solve();
    return 0;
}