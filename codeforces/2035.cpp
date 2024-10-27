#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
      long long n,c,m,r;
      
      cin>>n>>m>>r>>c;
      long long ans;
      ans=(n-r)*(2*m-1)+m-c;
      cout<<ans<<endl;
    }
    
    return 0;
 }