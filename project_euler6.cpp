#include <iostream>
using namespace std;

int sumofsquares(int n){
    long long sum1=(n*(n+1)*(2*n+1))/6;
    cout<<"sum1 is "<<sum1<<endl;
    long long sum2=(n*(n+1))/2;
    long long real_sum2=sum2*sum2;
    cout<<"sum2 is "<<real_sum2<<endl;
    int ans=real_sum2-sum1;
    cout<<ans<<endl;
    return 0;
}

int main(){
    int t;
    cin>>t;
    int i=0;
    while(i<t){
        int n;
        cin>>n;
        sumofsquares(n);
        i++;
    }
}