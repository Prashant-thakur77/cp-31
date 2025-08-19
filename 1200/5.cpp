#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code here
    ll n,k;
    cin>>n>>k;
    vector<pair<ll,ll>> v;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back({x,i+1});
    }
    //cout<<"hello"<<endl;
    sort(all(v));
    vector<ll> step[k+1];
    for(int i=1;i<=k;i++){
        step[i].push_back(0);
    }
    for(int i=0;i<n;i++){
        
        step[v[i].first].push_back(v[i].second);
        
    }
    for(int i=1;i<=k;i++){
        step[i].push_back(n+1);
    }
  
    priority_queue<ll> steps[k+1];
        ll mini=INT_MAX;
    for (int i = 1; i <=k; i++) {
       for(int j=1;j<step[i].size();j++){
        steps[i].push(abs(step[i][j]-step[i][j-1]-1));

       }
       ll max_val=steps[i].top();
        steps[i].pop();
        if(max_val%2==0){
            steps[i].push(max_val/2);
            steps[i].push(max_val/2-1);
        }
        else{
            steps[i].push(max_val/2);
            steps[i].push(max_val/2);

        }
        mini=min(mini,steps[i].top());
    }
    
    cout<<mini<<endl;
    return;
  

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}