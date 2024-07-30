#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    

    while (t--){
        int n,x;
        cin>>n;
        int sum=0;
        for(int i=10;i<10000000;i=i*10){
            if(n<=i){
                x=n/(i/10);
                sum=sum+x;
                break;

            }
            
            else sum=sum+9;
        }
        cout<<sum<<endl;
    }
    return 0;
}