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
    int n,s,x;
    cin>>n>>s>>x;
    vector<int> v(n);
    int sum=0;
    for(int i=0;i<n;i++){
      cin>>v[i];
      sum+=v[i];
    }
    if(sum==s){
      cout<<"yes"<<endl;
      return;
    }
    else if(sum>s){
      cout<<"no"<<endl;
      return;
    }
    int no=s-sum;
    if(no%x==0){
      cout<<"yes"<<endl;
    }
    else{
      cout<<"no"<<endl;
    }

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}