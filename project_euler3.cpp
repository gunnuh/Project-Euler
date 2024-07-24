#include<iostream>
#include<cmath>
using namespace std;

long long maxPrime(long long n) {
   long long maxPF = -1;
   while (n % 2 == 0) {
      maxPF = 2;
      n /= 2;
   }
   for (int i = 3; i <= sqrt(n); i += 2) {
      while (n % i == 0) {
         maxPF = i;
         n = n / i;
      }
   }
   if (n > 2)
   maxPF = n;
   cout<<maxPF<<endl;
   return 0;
}

int main(){
    int t;
    cin>>t;
    int a=0;
    while(a<t){
        int n;
        cin>>n;
        maxPrime(n);
        a++;
    }
    return 0;
}