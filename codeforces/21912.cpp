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
    vector<int> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    sort(all(v));
    int cnt0=0;
    int cnt1=0;
    for(int i=0;i<n;i++){
      if(v[i]==0)cnt0++;
      else if(v[i]==1)cnt1++;

    }
    if(cnt0==0){
      cout<<"no"<<endl;
      return;
    }
    if(cnt0==1){
      cout<<"yes"<<endl;
      return;
    }
    if(cnt0>1 && cnt1!=0){
      cout<<"yes"<<endl;
    }
    else cout<<"no"<<endl;


    


  
  
    
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}