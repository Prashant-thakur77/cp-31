#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      vector<int> v(n);
      for(int i=0;i<n;i++){
        cin>>v[i];
      }
      int cnt=0;
      for(int i=0;i<n-1;i++){
        if(v[i]==0 && v[i+1]!=0) cnt++;
      }
      if(v[0]!=0) cnt++;
      if(cnt==0) cout<<0<<endl;
      else if(cnt==1) cout<<1<<endl;
      else cout<<2<<endl;
    }
    return 0;
 }