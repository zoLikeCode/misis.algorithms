#include <iostream>
#include <cctype>
#include <string>

void solve()
{
    std::string s = "";
    std::cin >> s;
    s[0] = std::toupper(s[0]);
    std::cout << s;
}

int main()
{
    solve();
    return 0;
}
