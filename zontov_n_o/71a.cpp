#include <iostream>
#include <string>

void solve()
{
    std::string w = "";
    std::cin >> w;
    if (w.length() > 10) {
        std::cout << w[0] << w.length() - 2 << w[w.length() - 1] << std::endl;
    } else {
        std::cout << w << std::endl;
    }
}

int main()
{
    int tt = 0;
    std::cin >> tt;
    while (tt--) solve();
    return 0;
}
