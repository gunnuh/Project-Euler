#include<bits/stdc++.h>
using namespace std;

long long lcm(long long n)
{
    long long ans = 1;    
    for (long long i = 1; i <= n; i++)
        ans = (ans * i)/(__gcd(ans, i));
    return ans;
}

int main() 
{
    int t;
    cin>>t;
    int i=0;
    while(i<t){
        long long n;
        cin>>n;
        cout << lcm(n)<<endl;
        i++;
    }
    return 0;
}