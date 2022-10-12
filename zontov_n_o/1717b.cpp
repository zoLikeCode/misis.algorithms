#include <iostream>


void solve()
{
    int n, k, r, c = 0;
    std::cin >> n >> k >> r >> c;
    for (int i = 1; i <= n; i += 1)
    {
        for (int j = 1; j <= n; j += 1)
        {
            if ((i + j) % k == (r + c) % k)
            {
                std::cout << "X";
            }
            else
            {
                std::cout << ".";
            }
        }
        std::cout << std::endl;
    }



}

int main()
{
    int tt = 0;
    std::cin >> tt;
    while (tt--) solve();
    return 0;
}