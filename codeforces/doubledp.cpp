#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    string s,t;
    cin>>s>>t;
    int n=s.size();
    int m=t.size();

    vector<vector<int>> dp(n+1,vector<int> (m+1,0));
    int maxi=0;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=m;j++){
        if(s[i-1]==t[j-1]){
          dp[i][j]=1+dp[i-1][j-1];
          maxi=max(maxi,dp[i][j]);
        }
      }
    }
    cout<<n+m-2*maxi<<endl;
  }
  return 0;
  }
  
