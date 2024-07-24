#include <iostream>
#include <string>
using namespace std;

// Function to find the greatest product of K consecutive digits in the N digit number
int greatestProduct(const string& number, int k) {
    int max_product = 0;
    int n = number.size();
    
    for (int i = 0; i <= n - k; i++) {
        int product = 1;
        for (int j = 0; j < k; j++) {
            product *= number[i + j] - '0'; // Convert char to int
        }
        if (product > max_product) {
            max_product = product;
        }
    }
    return max_product;
}

int main() {
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int n, k;
        string number;
        
        cin >> n >> k >> number;
        
        if (number.size() != n) {
            cerr << "Error: The size of the number does not match the provided N value." << endl;
            return 1;
        }
        
        int max_product = greatestProduct(number, k);
        cout << max_product << endl;
    }
    
    return 0;
}
