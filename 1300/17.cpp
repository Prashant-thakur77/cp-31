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
    ll n,m;
    cin>>n>>m;
    vector<ll> v(n);
    vector<ll> w(m);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    for(int i=0;i<m;i++){
      cin>>w[i];
    }
    sort(rall(v));
    ll lastpurch=0;
    ll cost=0;
    for(int i=0;i<n;i++){
      //cout<<"lastpurch "<<lastpurch<<endl;
      //cout<<"w  "<<w[v[i]-1]<<endl;
      if(lastpurch==0){

        cost+=w[lastpurch];
        lastpurch++;

      }
      else{
        ll c=min(w[lastpurch],w[v[i]-1]);
        cost+=c;
        if(c<w[v[i]-1]){
          lastpurch++;
        }
        

      }
      //cout<<"cost "<<cost<<endl;
    }
    cout<<cost<<endl;



    
    
    
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}