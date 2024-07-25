#include <iostream>
#include <string>
#include <vector>
using namespace std;

string add_large_numbers(const vector<string>& numbers) {
    int maxLength = 50;
    int carry = 0;
    string result = "";

    for (int i = maxLength - 1; i >= 0; --i) {
        int columnSum = carry;
        for (const string& number : numbers) {
            columnSum += number[i] - '0';
        }
        carry = columnSum / 10;
        result = to_string(columnSum % 10) + result;
    }

    while (carry > 0) {
        result = to_string(carry % 10) + result;
        carry /= 10;
    }

    return result;
}

int main() {
    int N;
    cout << "Enter the number of 50-digit numbers: ";
    cin >> N;

    vector<string> numbers(N);
    cout << "Enter the " << N << " 50-digit numbers:\n";
    for (int i = 0; i < N; ++i) {
        cin >> numbers[i];
    }

    string sum = add_large_numbers(numbers);

    cout << "The first 10 digits of the sum are: " << sum.substr(0, 10) << endl;
    return 0;
}
