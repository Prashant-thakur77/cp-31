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
    ll m=n;
    
    int a=1;
    int b=1;
    int c=1;
    for(int i=2;i*i<n;i++){
      if(n%i==0){
        a=i;
        break;
      }
    }
    if(a==1){
      cout<<"no"<<endl;
      return;
    }
    n=n/a;
    for(int i=a+1;i*i<n;i++){
      if(n%i==0){
        b=i;
        break;
      }
    }
    if(b==1){
      cout<<"no"<<endl;
      return;
    }
    c=m/(a*b);

    
    
    
    if(c>1 && c!=b && c!=a){
       cout<<"yes"<<endl;
       cout<<a<<" "<<b<<" "<<c<<endl;
       return;
    }
    cout<<"no"<<endl;
      return;
    
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}