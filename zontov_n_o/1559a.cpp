#include <iostream>

void solve() {
    int n = 0;
    std::cin >> n;
    int a[n];
    for (int i = 0; i < n; i += 1){
        std::cin >> a[i];
    }

    int x  = a[0];
    for (int i = 0; i < n; i += 1){
        x = x & a[i];
    }

    std::cout << x << std::endl;
}

int main() {
    int tt = 0;
    std::cin >> tt;
    while(tt--) solve();
    return 0;
}

