#include <iostream>
#include <cmath>


//Задача 3
int factorial(double n){
    double res = 1;
    for (double i = 1; i <= n; i += 1) {
        res = res * i;
    }
    return res;
}

void solve()
{
    double a = 0;
    double b = 1.0;
    double step = 0.1;
    double epsilon = 0.0001;
    double rs = 0.0;

    std::cout << " x | s(x) | f(x) "<< std::endl;
    for (double x = a, i = 0; x <= b; x += step, i += 1) {
        double s = std::pow(2 * x, i) / factorial(i);
        double y = std::pow(std::exp(1.0), 2 * x);
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
