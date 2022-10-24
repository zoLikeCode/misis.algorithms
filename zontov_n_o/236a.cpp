#include <iostream>
#include <string>
#include <set>

void solve() {
    std::string str;
    std::cin >> str;
    char m[str.length()];
    for (int i = 0; i < str.length(); i += 1) {
        m[i] = str[i];
    }
    std::set<int> mySet(m, m + str.length());
    int k = mySet.size();
    if (k % 2 == 0) {
        std::cout << "CHAT WITH HER!" << std::endl;
    } else {
        std::cout << "IGNORE HIM!" << std::endl;
    }

}

int main() {
    solve();
    return 0;
}