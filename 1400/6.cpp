#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007
const int N =200003;
const int bits=30;
int pref[N][bits];
int v[N];
void Buildp(int n){
  for(int i=0; i< n; i++){
        for(int j=0; j<30; j++){
            if(v[i]&(1<<j)){
                pref[i+1][j]=pref[i][j]+1;
            }
            else{
                pref[i+1][j]=pref[i][j];
            }
        }
    }

}
void solve() {
    // Your code here
    ll n;
    cin>>n;
   
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    Buildp(n);
    ll q;
    cin>>q;
    for(int i=0;i<q;i++){
      int l,k;
      cin>>l>>k;
      if(v[l-1]<k){
            cout << -1 << '\n';
            continue;
        }
      int low=l;
      int high=n;
      int ans=1;
      while(low<=high){
        int mid=(low+high)/2;
        int num=0;
        for(int j=0; j< bits; j++){
          if(pref[mid][j]-pref[l-1][j]==mid-l+1){
              num+=(1<<j);
          }
        }
        if(num>=k){
          low=mid+1;
          ans=max(ans,mid);
        }
        else{
          high=mid-1;
        }

      }
      cout<<ans<<endl;

    }
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}