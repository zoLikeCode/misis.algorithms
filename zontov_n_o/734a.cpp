#include <iostream>
#include <string>

int main()
{
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    int k_a = 0, k_d = 0;
    for (int i = 0; i < n; i++)
        if (s[i] == 'A') k_a++; else k_d++;
    if (k_a > k_d)
        std::cout << "Anton" << std::endl;
    if (k_a < k_d)
        std::cout << "Danik" << std::endl;
    if (k_a == k_d)
        std::cout << "Friendship" << std::endl;
    return 0;
}