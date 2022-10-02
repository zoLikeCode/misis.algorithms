#include <iostream>
#include <cmath>


//Задача 1
int factorial(double n){
    double res = 1;
    for (double i = 1; i <= n; i += 1) {
        res = res * i;
    }
    return res;
}

void solve()
{
    double a = -1;
    double b = 1;
    double step = 0.1;
    double epsilon = 0.001;

    double rs = 0.0;

    std::cout << " x | s(x) | f(x) "<< std::endl;
    for (double x = a, i = 0; x <= b; x += step, i += 1) {
        double s = std::pow(-1, i) * (std::pow(x, 2 * i) / factorial(2 * i));
        double y = std::cos(x);
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
