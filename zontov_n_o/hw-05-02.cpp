#include <iostream>
#include <cmath>

#define USE_MATH_DEFINES

//Задача 2

double sequenseSum(double x) {
    double epsilon = 0.001;
    double rs = 0.0;
    for(int i = 1; ;i+=1){
        double step = std::pow(x, i) * std::sin(i * (M_PI / 4));
        if(std::abs(step) < epsilon && i % 4 == 0) break;
        rs += step;
    }
    return rs;
}

void solve()
{
    std::cout << " x | s(x) | f(x) "<< std::endl;
    for (double x = 0; x <= 1; x += 0.05) {
        double s = sequenseSum(x);
        double y = (x * std::sin(M_PI / 4)) / (1 - 2 * x * std::cos(M_PI / 4));
        std::cout << std::fixed << x << " | " << s << " | " << y << std::endl;
    }
}

int main()
{
    solve();
    return 0;
}