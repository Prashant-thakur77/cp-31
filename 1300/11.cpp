#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007
int ans=0;
int dfs(int node,vector<vector<int>>& v,string s){
    if(v[node].size()==0){
        return s[node-1]=='W'?1:-1;
    }
    int count=0;
    for(auto ch: v[node]){
        count+=dfs(ch,v,s);
    }
    count+=(s[node-1]=='W'? 1:-1);
    if(count==0){
        ans++;
    }
    return count;

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) 
    {
        ans=0;
        int n;
        cin>>n;
        vector<vector<int>> v(n+1,vector<int>());
        for(int i=0;i<n-1;i++){
            int temp;
            cin>>temp;
            v[temp].push_back(i+2);
        }
        string s;
        cin>>s;
        dfs(1,v,s);
        cout<<ans<<endl;

    }
    return 0;
}