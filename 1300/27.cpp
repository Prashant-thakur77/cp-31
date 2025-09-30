#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007
bool check(int mid,vector<int> v,int h){
  sort(v.begin(),v.begin()+mid);
  int sum=0;
 // cout<<" mid "<<mid<<endl;
  
  for(int i=mid-1;i>=0;i-=2){
    sum=sum+v[i];
    if(sum>h)return false;


  }
  return true;


}

void solve() {
    // Your code here
    ll n,h;
    cin>>n>>h;
    vector<int> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    int low=2;
    int high=n;
    while(low<=high){
      int mid=(low+high)/2;
      bool poss=check(mid,v,h);
      if(poss){
        low=mid+1;
      }
      else high=mid-1;
    }
    cout<<high<<endl;

}

int32_t main() {
   solve();
    return 0;
}