#include <iostream>

void solve(){
    int n, m, sx, sy, d = 0;
    std::cin >> n >> m >> sx >> sy >> d;
    if ((std::min(sx - 1, m - sy) <= d) && std::min(n - sx, sy - 1) <= d) {
        std::cout << -1 << std::endl;
    } else {
        std::cout << n + m - 2 << std::endl;
    }

}

int main()
{
    int tt = 0;
    std::cin >> tt;
    while (tt--) solve();
    return 0;
}