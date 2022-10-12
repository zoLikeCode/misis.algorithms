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

double sequenseSum(double x) {
    double epsilon = 0.0001;
    double rs = 0.0;
    for (int i = 0; ; i += 1) {
        double step = std::pow(2 * x, i) / factorial(i);
        if (std::abs(step) < epsilon) break;
        rs += step;
    }
    return rs;
}

void solve()
{
    std::cout << " x | s(x) | f(x) "<< std::endl;
    for (double x = 0; x <= 1.0; x += 0.1) {
        double s = sequenseSum(x);
        double y = std::pow(std::exp(1.0), 2 * x);
        std::cout << std::fixed << x << " | " << s << " | " << y << std::endl;
    }
}



int main()
{
    solve();
    return 0;
}
