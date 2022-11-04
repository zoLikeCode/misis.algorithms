#include <iostream>
#include <string>


void solve() {
    int n = 0;
    std::cin >> n;
    std::string s;
    std::cin >> s;

    if (n == 1 && s[0] == 'W') {
        std::cout << "YES" << std::endl;
        return;
    } else if (n == 1) {
        std::cout << "NO" << std::endl;
        return;
    }

    bool flag = false;
    for (int i = 0; i < n; i += 1) {
        if (s[i] != 'W') {
            flag = true;
        }
    }

    if (!flag) {
        std::cout << "YES" << std::endl;
        return;
    }

    bool check = false;
    bool red = false;
    bool blue = false;
    for (int i = 0; i < n; i += 1) {
        if (!red)
            red = s[i] == 'R';
        if (!blue)
            blue = s[i] == 'B';

        if ((s[i] == 'W' || i == n - 1) && red ^ blue) {
            check = true;
        } else if (s[i] == 'W') {
            red = false;
            blue = false;
        }
    }

    if (check) {
        std::cout << "NO" << std::endl;
    } else {
        std::cout << "YES" << std::endl;
    }


}

int main() {
    int tt = 0;
    std::cin >> tt;
    while (tt--) solve();
    return 0;
}