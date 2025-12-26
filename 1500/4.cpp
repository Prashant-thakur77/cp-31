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
    vector<ll> v(n);
    string s;
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    cin>>s;
    vector<ll> st(n,-1);
    set<int> st1;
    set<int> st0;
    st[0]=v[0];
    for(int i=1;i<n;i++){
      st[i]=st[i-1]^v[i];
    }
    ll xor1=0;
    ll xor0=0;
    for(int i=0;i<n;i++){
      if(s[i]=='1'){
        xor1=xor1^v[i];
        
        
      }
      else{
        xor0=xor0^v[i];
        
      }
    }
    ll q;
    cin>>q;
    vector<int> ans;
    
    for(int i=0;i<q;i++){
      int no;
      cin>>no;

      if(no==1){
        int a,b;
        cin>>a>>b;
        a--;
        b--;
        ll range=st[b]^(a?st[a-1]:0);
        xor1=xor1^range;
        xor0=xor0^range;


      }
      else{
        int a;
        cin>>a;
        ll ans1=0;
        if(a==0){
          cout<<xor0<<" ";
        }
        else{
          cout<<xor1<<" ";
        }
        
  

      }

    }
    /*for(int i=0;i<ans.size();i++){
      cout<<ans[i]<<" ";
    }*/
    cout<<endl;

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}