#include <iostream>
#include <string>

void solve()
{
    std::string str1, str2 = "";
    std::cin >> str1 >> str2;

    for (int i = 0; i < str1.length(); i += 1){
        str1[i] = toupper(str1[i]);
    }

    for (int i = 0; i < str2.length(); i += 1){
        str2[i] = toupper(str2[i]);
    }

    if (str1 < str2) {
        std::cout << -1 << std::endl;
    }
    else if (str1 > str2) {
        std::cout << 1 << std::endl;
    }
    else {
        std::cout << 0 << std::endl;
    }

}

int main()
{
    solve();
    return 0;
}