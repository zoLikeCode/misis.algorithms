#include <iostream>
#include <string>

void solve() {
    int n = 0;
    std::cin >> n;
    int a[n];
    for (int i = 0; i < n; i += 1) {
        std::cin >> a[i];
    }

    for (int i = 0; i < n; i += 1) {
        int b = 0;
        std::string r = "";
        std::cin >> b >> r;
        for (int j = 0; j < b; j += 1) {

            if (r[j] == 'D') {
                a[i] += 1;
                if (a[i] > 9) {
                    a[i] = 0;
                }
            }

            if (r[j] == 'U') {
                a[i] -= 1;
                if (a[i] < 0){
                    a[i] = 9;
                }
            }
        }
    }

    for (int i = 0; i < n; i += 1) {
        std::cout << a[i] << " ";
    }


}

int main()
{
    int tt = 0;
    std::cin >> tt;
    while(tt--) solve();
    return 0;
}