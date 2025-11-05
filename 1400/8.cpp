#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007
vector<int> dp;
vector<vector<int>> v;
map<pair<int,int>,int> mp;
void dfs(int a,int b){
    for(auto it: v[a]){
        if(it==b)continue;
        if(mp[{b,a}]<mp[{a,it}]){
            dp[it]=dp[a];
        }
        else dp[it]=dp[a]+1;
        dfs(it,a);
    }
}

void solve() {
    // Your code here
    int n;
    cin>>n;
    v.assign(n, {});
    dp.assign(n, 0); 
   
    for(int i=0;i<n-1;i++){
        int k,m;
        cin>>k>>m;
        k--;
        m--;
        v[k].push_back(m);
        v[m].push_back(k);
        mp[{k,m}]=i;
        mp[{m,k}]=i;


        
    }
    mp[{-1,0}]=-1;
    dp[0]=1;
    dfs(0,-1);
    cout<<*max_element(dp.begin(),dp.end())<<endl;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}