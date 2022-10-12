#include <iostream>
#include <cmath>

int main()
{
    int n, k = 0;
    std::cin >> n >> k;
    int max = -1000000000;
    for (int i = 0; i < n; i++)
    {
        int f, t = 0;
        int lunch = -1000000;
        std::cin >> f >> t;
        if (t > k)
        {
            lunch = f - (t - k);
        }
        if (k >= t)
        {
            lunch = f;
        }
        if (lunch > max)
        {
            max = lunch;
        }
    }
    std::cout << max;
}
