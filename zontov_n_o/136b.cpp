#include <iostream>
#include <cmath>
#include <string>

long long to_three(long long n) {
    long long result = 0;
    long long degree = 1;
    while(n > 0) {
        result += degree * (n % 3);
        degree *= 10;
        n /= 3;
    }
    return result;
}

long long to_ten(long long n) {
    long long i = 0;
    long long dem = 0;
    long long rem = 0;
    while(n != 0){
        rem = n % 10;
        n /= 10;
        dem += rem * pow(3, i);
        i += 1;
    }
    return dem;
}

void solve(){
    long long a, c = 0;
    std::cin >> a >> c;
    long long a_three = to_three(a);
    long long c_three = to_three(c);
    std::string a_str = std::to_string(a_three);
    std::string c_str = std::to_string(c_three);
    if (a > c) {
        while (a_str.length() > c_str.length()) {
            c_str.insert(c_str.begin(), '0');
        }

    } else if (c > a){
        while (c_str.length() > a_str.length()) {
            a_str.insert(a_str.begin(), '0');
        }
    }
    int n = a_str.length();
    std::string new_three;
    for (int i = 0; i < n; i += 1) {
        int z1 = a_str[i] - '0';
        int z2 = c_str[i] - '0' + 3;
        int r = (z2 - z1) % 3;
        new_three.insert(new_three.end(), std::to_string(r)[0]);
    }
    std::cout << to_ten(std::stoll(new_three)) << std::endl;

}

int main() {
    solve();
    return 0;
}