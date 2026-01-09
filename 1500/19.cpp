#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code here
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<vector<ll>> v(k+1, vector<ll>(26));
    vector<int> vec(k+1,0);
    vector<int> visited(n,-1);
    for(int i=0;i<k+1;i++){
      ll m=i;
      ll cntal=0;
      while(m<n){
        if(visited[m]==-1){
          v[i][s[m]-'a']++;
          cntal++;
          visited[m]=1;
        }
        if(visited[n-m-1]==-1){
          v[i][s[n-m-1]-'a']++;
          cntal++;
          visited[n-m-1]=1;

        
          
          
          
          

        }
        
        m=m+k;

      }
      vec[i]=cntal;
    }
    
    ll cnt=0;
    ll i=0;
    for(auto & it:v){
      sort(rall(it));
      auto j=it.begin();
      ll no=*j;
      cnt+=(vec[i]-no);
      i++;

      
    
    


    }
    cout<<cnt<<endl;

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}