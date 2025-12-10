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
    ll n;
    cin>>n;
    vector<ll> b(n);
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>b[i];
        sum+=b[i];
    }
    sort(all(b));
    int cntz=0;
    for(int i=0;i<n;i++){
        if(b[i]==0)cntz++;
        else break;
    }
    int k=n;
    int i=1;
    ll ans=1;
    while(k>=1){
        //cout<<"hello"<<endl;
        if(sum>=(ll)2*n-i && sum<=(ll)n*(n-i+1) && k<=n-cntz){
            ans=k;
            //cout<<"ans"<<ans<<endl;
            break;

        }
        i++;



        k--;
    }
    cout<<k<<endl;
    return;
    
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}