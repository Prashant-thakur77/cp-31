#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    

    while (t--){
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        bool yes=true;
        if(d<b) {
            
            yes=false;
        }
        long long k=d-b;
        a=a+k;
        b=b+k;
        if(a<c) {
            
            yes=false;

        }
        if(yes) cout<<k+a-c<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
            