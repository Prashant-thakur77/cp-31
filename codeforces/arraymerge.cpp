#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> s(n);
    for(int i=0;i<n;i++){
      cin>>v[i];

    }
    for(int i=0;i<n;i++){
      cin>>s[i];
    }
    map<int,int> mp1;
    
    int last=v[0];
    int cnt=0;
    for(int i=0;i<n;i++){
      if(v[i]==last){
        cnt++;
      }
      else{
        mp1[last]=max(mp1[last],cnt);
        last=v[i];
        cnt=1;
        
      }
      

    }
    mp1[last]=max(mp1[last],cnt);
    map<int,int> mp2;
    int last2=s[0];
    int cnt2=0;
    for(int i=0;i<n;i++){
      if(s[i]==last2){
        cnt2++;
      }
      else{
        mp2[last2]=max(mp2[last2],cnt2);
        last2=s[i];
        cnt2=1;
        
      }
      

    }
    mp2[last2]=max(mp2[last2],cnt2);
    int maxi=INT_MIN;
    for(auto it : mp1){
      //cout << "Element " << it.first << "longest chain: " << it.second << endl;
      maxi=max(maxi,it.second+mp2[it.first]);
    }
    int maxi2=INT_MIN;
    for(auto it : mp2){
      //cout << "Element " << it.first << "longest chain: " << it.second << endl;
      maxi2=max(maxi2,it.second+mp1[it.first]);
    }
    int ans=max(maxi,maxi2);
    cout<<ans<<endl;
    
  }
  return 0;

}