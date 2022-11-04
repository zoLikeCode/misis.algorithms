#include <iostream>
#include <string>
#include <vector>

void solve() {
    int k, n = 0;
    std::string s;
    std::cin >> n >> k >> s;

    std::vector<int> w(n + 1);
    for (int i = 1; i <= n; i += 1) {
        w[i] = w[i - 1] + int(s[i - 1] == 'W');
    }
    int repaint = 10000000;
    for (int i = k; i <= n; i += 1) {
        repaint = std::min(repaint, w[i] - w[i - k]);
    }
    std::cout << repaint << std::endl;

}

int main() {
    int tt = 0;
    std::cin >> tt;
    while (tt--) solve();
    return 0;
}
