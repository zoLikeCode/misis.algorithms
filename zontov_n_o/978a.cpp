#include <iostream>
#include <array>

int main()
{
    int n = 0;
    std::cin >> n;
    const int nMax = 50;
    std::array<int, nMax> a{0};
    int count = n;

    for (int i = 0; i <= n - 1; i++){
        std::cin >> a[i];
    }

    for (int i = n; i >= 0; i--){
        for (int j = i - 1; j >= 0; j--){
            if (a[j] == a[i] && a[j] != 0){
                a[j] = 0;
                count--;
            }
        }
    }

    std::cout << count << "\n";
    for(int m = 0; m <= n - 1; m++){
        if (a[m] != 0) {
            std::cout << a[m] << " ";
        }
    }
}