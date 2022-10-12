#include <iostream>
#include <vector>

void solve()
{
    int n, k, temp = 0;
    std::cin >> n >> k;
    std::vector<int> a;
    for(int i = 0; i < n; i+=1)
    {
        std::cin >> temp;
        a.push_back(temp);
    }
    int t = a[k - 1], res = 0;
    for(int i = 0; i < a.size(); i+=1){
        if(a[i] > 0 && a[i] >= t)
        {
            res += 1;
        }
    }
    std::cout << res;

}

int main()
{
    solve();
    return 0;
}
