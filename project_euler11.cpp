//What is the greatest product of four adjacent numbers in the same direction (up, down, left, right, or diagonally) in the  grid?

#include <iostream>
#include <algorithm>
using namespace std;

int max_product_4(int grid[20][20]) {
    int max_product = 0;

    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            if (j < 17) {
                int row_product = grid[i][j] * grid[i][j + 1] * grid[i][j + 2] * grid[i][j + 3];
                max_product = max(max_product, row_product);
            }
            if (i < 17) {
                int col_product = grid[i][j] * grid[i + 1][j] * grid[i + 2][j] * grid[i + 3][j];
                max_product = max(max_product, col_product);
            }
            if (i < 17 && j < 17) {
                int diag1_product = grid[i][j] * grid[i + 1][j + 1] * grid[i + 2][j + 2] * grid[i + 3][j + 3];
                max_product = max(max_product, diag1_product);
            }
            if (i < 17 && j > 2) {
                int diag2_product = grid[i][j] * grid[i + 1][j - 1] * grid[i + 2][j - 2] * grid[i + 3][j - 3];
                max_product = max(max_product, diag2_product);
            }
        }
    }

    return max_product;
}

int main() {
    int grid[20][20];

    cout << "Enter the elements of the 20x20 grid:" << endl;
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            cin >> grid[i][j];
        }
    }
    int max_product = max_product_4(grid);
    cout << "Greatest product of four adjacent numbers in the same direction is " << max_product << endl;
    return 0;
}
