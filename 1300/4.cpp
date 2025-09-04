#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code here
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    map<int,int> mp;
    for(int i=0;i<n;i++){
        for(int j=2;j*j<=v[i];j++){
            while(v[i]%j==0){
                mp[j]++;
                v[i]/=j;
            }
        }
        if(v[i]>1)mp[v[i]]++;

    }
    int flag=1;
    for(auto & it:mp){
        if(it.second%n!=0){
            flag=0;
            break;

        }
    }
    if(flag)cout<<"yes"<<endl;
    else cout<<"no"<<endl;

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}