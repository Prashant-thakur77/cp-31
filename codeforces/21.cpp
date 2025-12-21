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
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    if(accumulate(a.begin(),a.end(),0)==n){
        cout<<"yes"<<endl;
        return;
    }

    for(int i=0;i+1<n;i++){
        if(a[i]==0&&a[i+1]==0){
            cout<<"yes"<<endl;
            return;
        }
    }

    cout<<"no"<<endl;

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}