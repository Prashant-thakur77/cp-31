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
    int n,k;
    cin>>n>>k;
    vector<ll> v(n);
    vector<int> w(n-1,0);
    for(int i=0;i<n;i++)cin>>v[i];
    for(int i=1;i<n;i++){
      if(2*v[i]>v[i-1]){
        w[i-1]=1;
      }
    }
    
    
    int l=0;
    int r=0;
    int cnt=0;
    int curz=0;
    int cur=0;
    while(r<n-1){
      //cout<<"r "<<r<<"l  "<<l<<endl;
     
      if(w[r]==1){
        cur++;
      }
      if(w[r]==0){
        curz++;
      }
      while(cur>k){
        if(w[l]==1){
          cur--;
        }
        l++;
        
      }
      if(curz>0){
        l=r;
        l++;
        curz=0;
        cur=0;
      }
      
      if((r-l+1)==k)cnt++;
      r++;
       /*cout<<"cnt  "<<cnt<<endl;
      cout<<"curzero  "<<curz<<endl;
      cout<<"cursum  "<<cur<<endl;*/
      
      
      


    }
    cout<<cnt<<endl;

    
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}