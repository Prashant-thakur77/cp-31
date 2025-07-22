#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long a,b,k;
    cin>>a>>b>>k;
    if(a<=k && b<=k){
      cout<<1<<endl;
    }
    else{
      long long hcf=__gcd(a,b);
      long long a1=a/hcf;
      long long b1=b/hcf;
      if(a1<=k && b1<=k){
        cout<<1<<endl;
      }
      else{
        cout<<2<<endl;
      }
    }
  }
  return 0;
}