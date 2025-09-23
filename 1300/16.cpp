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
    ll n,w;
    cin>>n>>w;
   
    vector<int> cnt(20);
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
       
        cnt[log2(x)]++;

    }
    int h=1;
    int space=w;
    for(int i=0;i<n;i++){
        int largest=-1;
        for(int j=19;j>=0;j--){
            if(cnt[j] && (1<<j)<=space){
                largest=j;
                break;
            }
        }
        if(largest==-1){
            h++;
            space=w;
            for(int j=19;j>=0;j--){
            if(cnt[j] && (1<<j)<=space){
                largest=j;
                break;
            }
        }
        }
        cnt[largest]--;
        space-=(1<<largest);
    }
    cout<<h<<endl;
    return;
    

  
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}