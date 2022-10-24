#include <iostream>

void solve() {
    int n = 0;
    std::cin >> n;

    for(int i = 1; i <= n; i += 1){
        for (int j = 1; j <= i; j += 1) {
            if (j == 1 || j == i) {
                std::cout << 1 << " ";
            } else {
                std::cout << 0 << " ";
            }
        }
        std::cout << std::endl;
    }
}

int main() {
    int tt = 0;
    std::cin >> tt;
    while(tt--) solve();
    return 0;
}
