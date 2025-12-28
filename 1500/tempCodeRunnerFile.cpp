#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007
ll rev(ll x){
  ll r=0;
  while(x>0){
    r=r*10+x%10;
    x=x/10;

  }
  return r;
}
bool palin(ll x){
  if(rev(x)==x){
    return true;
  }
  else return  false;



}

void solve() {
    // Your code here
    
}

int32_t main() {
  
    int k=50000;
    int l=500;
    int  dp[k][l];
    vector<int> pal;
    pal.push_back(0);
    for(int i=0;i<2*k;i++){
      if(palin(i)){
        pal.push_back(i);
      }
    }
    for(int j=1;j<l;j++)
        dp[0][j]=1;
    for(int i=1;i<k;i++)
    {
        dp[i][0]=0;
        for(int j=1;j<l;j++)
        {
            if(pal[j]<=i)
                dp[i][j]=(dp[i][j-1]+dp[i-pal[j]][j])%mod;
            else
                dp[i][j]=dp[i][j-1];
        }
    }

    fast_io;
    int t = 1;
    cin >> t;
    while (t--) {
      int n;
      cin>>n;
      cout<<dp[n][l-1]<<endl;
      
    }
    return 0;
}