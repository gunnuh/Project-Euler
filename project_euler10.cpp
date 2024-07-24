#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<long long> compute_prime_sums(long max_n) {
    vector<bool> is_prime(max_n + 1, true);
    is_prime[0] = is_prime[1] = false;
    vector<long long> prime_sums(max_n + 1, 0);
    long long sum = 0;
    for (long i = 2; i <= max_n; i++) {
        if (is_prime[i]) {
            sum += i;
            for (long j = i * i; j <= max_n; j += i) {
                is_prime[j] = false;
            }
        }
        prime_sums[i] = sum;
    }
    return prime_sums;
}
int main() {
    int t;
    cin >> t;
    vector<long> queries(t);
    long max_n = 0;
    for (int i = 0; i < t; i++) {
        cin >> queries[i];
        if (queries[i] > max_n) {
            max_n = queries[i];
        }
    }
    vector<long long> prime_sums = compute_prime_sums(max_n);
    for (int i = 0; i < t; i++) {
        cout << prime_sums[queries[i]] << endl;
    }
    return 0;
}
