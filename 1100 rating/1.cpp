#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int> mp;
    int cnt=0;
    int ans=0;
    for(int i=0;i<n;i++){
      
        mp[s[i]]++;
      if(mp[s[i]]==1)cnt++;
      ans=ans+cnt;

    }
    cout<<ans<<endl;
  }
  return 0;
}