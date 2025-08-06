#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    vector<long long> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    vector<long long> pre(n,0);
    pre[0]=v[0];
    for(int i=1;i<n;i++){
      pre[i]=v[i]+pre[i-1];

    }
    long long ans=0;
    for(int i=1;i<n;i++){
      if(n%i!=0)continue;
      int start=i-1;
      long long maxi=pre[start];
      long long mini=pre[start];
      for(int j=start+i;j<n;j+=i){
        long long curr=pre[j]-pre[j-i];
        maxi=max(maxi,curr);
        mini=min(mini,curr);
      }
      ans=max(ans,maxi-mini);
    }
    cout<<ans<<endl;
    
  }
  return 0;
}