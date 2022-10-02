#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

void solve()
{
    std::string s = "";
    std::cin >> s;

    int mas[101] = {0};

    for (int i = 0; i < s.length(); i += 2) {
        int number = s[i] - '0';
        mas[i] = number;
    }
    std::sort(std::begin(mas), std::end(mas));
    std::string r = "";
    for (int i = 0;  i < 101; i += 1) {
        if (mas[i] != 0) {
            r.append(std::to_string(mas[i]));
            r.append("+");
        }
    }
    for (int i = 0; i < s.length(); i += 1) {
        std::cout << r[i];
    }
}

int main()
{
    solve();
    return 0;
}

