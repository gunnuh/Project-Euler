#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


bool palindrome(long long n) {
    long long first_num = n;
    long long reverse = 0;

    while (n > 0) {
        long long num = n % 10;
        reverse = reverse * 10 + num;
        n /= 10;
    }

    return (first_num == reverse);
}
bool checker(int k){
    for(int i = 999; i >= 100; i--){
        if(k % i == 0 && k/i >= 100 && k/i <= 999){
            return true;
        }
    }
    return false;
}
signed main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long t;
    cin>>t;
    while(t--){
       long long n;
       cin>>n;
       for(long long i = n - 1; i >= 101101; i--){
           if(palindrome(i) == true && checker(i) == true) {
                cout<<i<<endl;
                i = INT8_MIN; //get out the "for loop"  when find i 
            }  
       } 
    }
    return (0^0);
}