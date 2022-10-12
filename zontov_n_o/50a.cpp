#include <iostream>

void solve()
{
    int m,n = 0;
    std::cin >> m >> n;
    int table = m * n;
    int dom = -1;
    while (table >= 0){
        dom += 1;
        table -= 2;
    }
    std::cout << dom << std::endl;
}

int main()
{
    solve();
    return 0;
}
