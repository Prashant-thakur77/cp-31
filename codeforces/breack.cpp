#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    int mini=INT_MAX;

  for(int i=0;i<n;i++){
    if(s[i]=='('){
      cnt++;
    }
    else cnt--;
    mini=min(mini,cnt);
  }
  cout<<abs(mini)<<endl;
    
    
      
      
      
    
    
  }
  return 0;
}