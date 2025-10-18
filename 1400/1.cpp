#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007

void solve() {
    ll n,m;
    cin>>n>>m;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
   
    vector<int> zer;
    ll ans=0;
    for(int i=0;i<n;i++){
      string s=to_string(v[i]);
      int siz=s.size();
      int no=siz;
      while(s[no-1]=='0'){
        no--;
      }
      if(no!=siz){
        zer.push_back(siz-no);
      }
      ans+=no;
      
    }
    sort(rall(zer));
    for(int i=1;i<zer.size();i=i+2){
      ans+=zer[i];

    }
    if(ans>m){
      cout<<"Sasha"<<endl;
    }
    else cout<<"Anna"<<endl;


}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}