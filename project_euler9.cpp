#include <iostream>
#include <algorithm>
using namespace std;

int findMaxProduct(int N) {
    int max_product = -1;
    for (int a = 1; a < N / 3; a++) {
        int b = (N * (N - 2 * a)) / (2 * (N - a));
        int c = N - a - b;
        if (a * a + b * b == c * c) {
            int product = a * b * c;
            max_product = max(max_product, product);
        }
    }
    return max_product;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int N;
        cin >> N;
        int result = findMaxProduct(N);
        cout << result << endl;
    }
    return 0;
}


