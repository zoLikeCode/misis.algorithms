#include <iostream>
#include <cmath>

int main()
{
    int tt = 0;
    std::cin >> tt;
    while (tt--)
    {
        int n1, n2 = 0;
        std::cin >> n1;
        n2 = n1;

        int summand = 0;
        while (n1 > 0)
        {
            int i = n1 % 10;
            if (0 != i)
            {
                summand += 1;
            }
            n1 /= 10;
        }
        std::cout << summand << std::endl;
        int degree = 0;
        while (n2 > 0)
        {
            int i = n2 % 10;
            if (0 != i)
            {
                std::cout << i * pow(10, degree) << " ";
            }
            degree += 1;
            n2 /= 10;
        }
    }
}