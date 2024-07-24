#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int i=0;
    while(i<t){
        long long n;
        cin>>n;
        long long first=1;
        long long second=2;
        long long third=0;
        long long sum=0;
        while(second<=n){
            if(second%2==0){
                sum+=second;
            }
            third=first+second;
            first=second;
            second=third;
        }
        cout<<"sum is "<<sum<<endl;
        i++;
    }
    return 0;
}