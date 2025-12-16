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
    long long a,b,x,y;
        cin>>a>>b>>x>>y;

        if(a>b){
            cout<<(((a^1)==b)?y:-1)<<endl;
        }else{
            long long c0=b-a;
            long long c1=((b+1)>>1)-((a+1)>>1);
            if(y>x)
                cout<<c0*x<<endl;
            else
                cout<<(c0-c1)*x+c1*y<<endl;
        }
          return ;
    }
  
    


int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}