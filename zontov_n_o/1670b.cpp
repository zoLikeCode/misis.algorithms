#include <iostream>
#include <cmath>


void solve()
{
    bool sp[26];
    for (int i = 0; i < 26; i++) {
        sp[i] = false;
    }
    int n, m = 0;
    std::string arr;
    std::cin >> n >> arr >> m;
    std::string ch;
    while(m--){
        std::cin >> ch;
        sp[ch[0]-'a'] = true;
    }
    int curr = 1;
    m = 0;
    for(int i = 1; i < n; i++){
        if(sp[arr[i]-'a']){
            m = std::max(m,curr);
            curr = 1;
        }
        else {
            curr += 1;
        }
    }
    std::cout << m << std::endl;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tt = 0;
    std::cin >> tt;
    while(tt--) {
        solve();
    }
    return 0;
}