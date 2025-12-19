#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007

void solve() {
    ll n;
    ll k;
    cin >> n >> k;
    vector<long long> ans(k);

    if (k%2==0) {
        if(__builtin_popcountll(n)== 1){
            for(int i=0;i<k-1;i++){
                ans[i]=n;
            }
            ans[k-1]=0;
        } 
        else {
            for(int i =0; i <k -2;i++){
                ans[i] =n;
            }
            int highest= -1, second= -1;
            for (int i= 0; i< 63;i++) {
                if (n&(1LL<<i)) {
                    second =highest;
                    highest =i;
                }
            }
            ll prefix= n& ~((1LL<<(second+1))-1);
            ans[k-2]= prefix|((1LL<<second)-1);
            ans[k-1]= n^ans[k-2];
        }

    } 
    else {
        for (int i=0;i<k;i++) {
            ans[i]=n;
        }
    }
    for(ll i=0;i<k;i++){
        cout<<ans[i]<<" ";

    } 
    return;
    }

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}