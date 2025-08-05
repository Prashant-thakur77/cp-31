#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<long long> v(n);
    for(int i=0;i<n;i++){
      cin>> v[i];
    }
    vector<long long> h(n);
    long long sum=0;
    for(int i=0;i<n;i++){
      h[i]=v[i];
      sum+=v[i];
    }
    sort(h.begin(),h.end());
    unordered_map<int,int> mp;
    mp[h[n-1]]=n-1;
    for(int i=n-2;i>=0;i--){
      sum=sum-h[i+1];
      if(sum>=h[i+1]){
        mp[h[i]]=mp[h[i+1]];
      }
      else{
        mp[h[i]]=i;
      }
      

      


    }
    for(int i=0;i<n;i++){
     cout<<mp[v[i]]<<" ";
    }
    cout<<endl;
    
    
  }
  return 0;
}