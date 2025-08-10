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
    vector<ll> a(n);
    vector<ll> b(n);
    unordered_map<ll,int> mp; 
   
    for (int i=0;i<n;i++) {
        cin>>a[i];
        mp[a[i]%k]++;  
    }
    for (int i=0;i<n;i++) {
        cin>>b[i];
      
    }

    for (int i=0;i<n;i++) {
       
        ll d=b[i] % k;
        ll no=d; 
        if (mp[no]>0) {
            mp[no]--;
        }
        else {
            no=abs(k-d);
            if(mp[no]>0) {
                mp[no]--;
            }
            else{
                cout<<"no"<<endl;;
                return;
            }
        }
    }
    cout<<"yes"<<endl;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}