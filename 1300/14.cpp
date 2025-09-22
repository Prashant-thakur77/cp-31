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
    vector<ll> no(n);
    for(int i=0;i<n;i++){
        cin>>no[i];
    }
    vector<int> v(31,0);
    for(int i=0;i<n;i++){
        ll num=no[i];
        for(int j=0;j<30;j++){
            if(((num&(1<<j)))){
                v[j]++;

            }

        }
    }
    vector<int> ans;
    for(int i=1;i<=n;i++){
        bool ok=true;
        for(int j=0;j<30;j++){
            if(v[j]%i!=0){
                ok=false;
                break;
            }
        }
        if(ok)ans.push_back(i);

    }
    /*for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;*/
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return;

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}