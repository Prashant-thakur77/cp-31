#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    

    while (t--){
        long long n,k;
        cin>>n;
        cin>>k;
        if(k%2==0){
            if(n%2!=0) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        else cout<<"YES"<<endl;
    }
    return 0;
}