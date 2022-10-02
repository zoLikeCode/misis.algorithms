#include <iostream>
#include <cmath>

#define USE_MATH_DEFINES

//Задача 2
void solve()
{
    double a = 0;
    double b = 1.05;
    double step = 0.05;
    double epsilon = 0.001;
    double rs = 0.0;
    std::cout << " x | s(x) | f(x) "<< std::endl;
    for (double x = a, i = 1; x <= b; x += step, i += 1) {
        double s = std::pow(x, i) * std::sin(i * (M_PI / 4));
        double y = (x * std::sin(M_PI / 4)) / (1 - 2 * x * std::cos(M_PI / 4));

        if (std::abs(s) < epsilon) break;
        rs += s;
        std::cout << x << " | " << rs << " | " << y << std::endl;
    }
}



int main()
{
    solve();
    return 0;
}