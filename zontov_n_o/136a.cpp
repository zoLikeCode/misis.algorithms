#include <iostream>

void solve()
{
    int n = 0;
    int p = 0;
    std::cin >> n;
    int a[n];
    for (int i = 1; i < n + 1; i += 1)
    {
        std::cin >> p;
        a[p - 1] = i;
    }
    for (int i = 0; i < n; i += 1)
    {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    solve();
    return 0;
}