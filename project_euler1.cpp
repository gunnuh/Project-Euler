#include <iostream>
using namespace std;

int multiple(int n){
    int sum=0;
    int j=1;
    while(j<n){
        if(i%3==0 || i%5==0){
            sum+=i;
        }
        j++;
    }
    cout<<sum<<endl;
    return 0;
}

int main(){
    int t;
    cin>>t;
    int i=0;
    while(i<t){
        int n;
        cin>>n;
        multiple(n);
        i++;
    }
}