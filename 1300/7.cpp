#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007

int32_t main() {
   
    int t ;
    cin >> t;
    vector<ll> ans(1e6+1,0);
    for(int i=2;i<=10000;i++){
      ll cur=1LL*i*i*i;
      ll curr1=(cur-1)/(i-1);
      while(curr1<=1e6){
        ans[curr1]=1;
        cur=cur*i;
        curr1=(cur-1)/(i-1);
      }
    }
    while (t--) {
      ll n;
      cin>>n;
      if(ans[n]){
        cout<<"yes"<<endl;
      }
      else cout<<"no"<<endl;
     
      
    }
    return 0;
}