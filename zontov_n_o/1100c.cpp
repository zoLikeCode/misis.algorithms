#include <cmath>
#include <iostream>
#include <iomanip>

void solve()
{
    int n, r = 0;
    std::cin >> n >> r;
    double pi = std::atan(1) * 4;
    double a = pi / n;
    double R = std::sin(a) * r / (1 - std::sin(a));
    std::cout << std::setprecision(10) << R;

}

int main()
{
    solve();
    return 0;
}