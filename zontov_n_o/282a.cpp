#include <iostream>
#include <string>

void solve(){
    int n = 0;
    std::cin >> n;
    int k = 0;
    for (int i = 0; i < n; i += 1){
        std::string str;
        std::cin >> str;
        if (str == "++X" || str == "X++"){
            k += 1;
        }
        if (str == "--X" || str == "X--"){
            k -= 1;
        }
    }
    std::cout << k << std::endl;

}

int main(){
    solve();
    return 0;
}