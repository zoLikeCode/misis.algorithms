#include <iostream>
#include <string>

void solve(){

    std::string m[8];
    for (int iRow = 0; iRow < 8; iRow += 1) {
        std::cin >> m[iRow];
    }

    for (int iRow = 1; iRow < 7; iRow += 1) {
        for (int iCol = 1; iCol < 7; iCol += 1) {
            if (m[iRow][iCol] == '#') {
                if(m[iRow - 1][iCol + 1] == '#' && m[iRow + 1][iCol + 1] == '#') {
                    std::cout << iRow + 1 << " " << iCol + 1 << std::endl;
                    return;
                }
                if (m[iRow - 1][iCol - 1] == '#' && m[iRow + 1][iCol - 1] == '#') {
                    std::cout << iRow + 1 << " " << iCol + 1 << std::endl;
                    return;
                }
            }
        }
    }

}

int main() {
    int tt = 0;
    std::cin >> tt;
    while (tt--) solve();
    return 0;
}
