#include <iostream>

int main()
{
    int middleRow = 2;
    int middleColumn = 2;
    int matrix[5][5] = {{0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}};
    int middle = 0;
    for (int i = 0; i < 5; i += 1)
    {
        for (int j = 0; j < 5; j += 1)
        {
            int n = 0;
            std::cin >> n;
            matrix[i][j] = n;
            if (matrix[i][j] == 1)
            {
                middle = abs(i - middleRow) + abs(j - middleColumn);
            }
        }
    }
    std::cout << middle;
}