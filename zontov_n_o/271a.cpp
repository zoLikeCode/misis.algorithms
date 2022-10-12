#include <iostream>

int main()
{
    int y = 0;
    std::cin >> y;
    for (int i = y + 1; i <= 9999; i += 1)
    {
        int a = i / 1000;
        int b = i / 100 % 10;
        int c = i / 10 % 10;
        int d = i % 10;
        if (a != b && b != c && c != d && a != c && a != d && b != d)
        {
            std::cout << i;
            break;
        }
    }
}
