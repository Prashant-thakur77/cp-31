#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007
ll ans1=0;
ll ans2=0;
ll n,x;
void func(ll p,ll q){
    if((p&q)==0 && abs(n-p)+abs(x-q)<abs(n-ans1)+abs(x-ans2)){
        ans1=p;
        ans2=q;
    }

}

void solve() {
    // Your code here
    
    cin>>n>>x;
    if((n&x)==0){
        cout<<n<<" "<<x<<endl;
        return;
    }
    for(int i=0;i<=30;i++){
        if(((n&x)>>i)&1){
            func((n>>i<<i)+(1LL<<i),x);
            func(n,(x>>i<<i)+(1LL<<i));
            func((n>>i<<i)-1,x>>i<<i);
            func(n>>i<<i,(x>>i<<i)-1);
        }

    }
    cout<<ans1<<" "<<ans2<<endl;

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}