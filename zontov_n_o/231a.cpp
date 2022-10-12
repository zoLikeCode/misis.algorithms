#include <iostream>
#include <string>
#include <cmath>

int main()
{
    int tt = 0;
    std::cin >> tt;
    int go = 0;
    while (tt--)
    {
        int yes = 0;
        for (int i = 0; i < 3; i += 1)
        {
            int a = 0;
            std::cin >> a;
            if (a == 1)
            {
                yes += 1;
            }
        }
        if (yes > 1)
        {
            go += 1;
        }
    }
    std::cout << go;
}