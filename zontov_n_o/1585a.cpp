#include <iostream>

void solve()
{
    int n = 0;
    std::cin >> n;
    int m[101] = {0};
    int height = 1;
    for (int i = 0; i < n; i += 1) {
        int a = 0;
        std::cin >> a;
        m[i] = a;
    }

    if (n == 1) {
        if(m[0] == 1) {
            height += 1;
            std::cout << height << std::endl;
        }
        if(m[0] == 0) {
            std::cout << height << std::endl;
        }
        return;
    }

    for (int i = 1; i < n; i += 1) {
        if (m[i-1] == 1 && m[i] == 1) {
            height += 5;
        }
        if (m[i-1] == 0 && m[i] == 0){
            std::cout << -1 << std::endl;
            return;
        }
        if (m[i-1] == 1 && m[i] == 0) {
            height += 1;
        }
        if (m[i-1] == 0 && m[i] == 1) {
            height += 0;
        }
    }
    std::cout << height << std::endl;
}

int main()
{
    int tt = 0;
    std::cin >> tt;
    while (tt--) solve();
    return 0;
}