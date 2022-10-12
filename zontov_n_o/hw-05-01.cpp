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

double sequenseSum(double x) {
    double epsilon = 0.001;
    double rs = 0.0;
    for (int i = 0; ; i += 1) {
        double step = std::pow(-1, i) * (std::pow(x, 2*i) / factorial(2*i));
        if (std::abs(step) < epsilon) break;
        rs += step;
    }
    return rs;
}

void solve()
{
    std::cout << " x | s(x) | f(x) "<< std::endl;
    for (double x = -1; x <= 1; x += 0.1) {
        double s = sequenseSum(x);
        double y = std::cos(x);
        std::cout << std::fixed << x << " | " << s << " | " << y << std::endl;
    }
}



int main()
{
    solve();
    return 0;
}
