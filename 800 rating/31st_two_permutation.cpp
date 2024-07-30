#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    

    while (t--){
        int n;
        cin>>n;
        int a,b;
        cin>>a;
        cin>>b;
        if(((a+b)<=n-2)|| (a==n) && (b==n) ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}