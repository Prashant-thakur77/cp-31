#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code here
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    vector<ll> presumstr(n);
    vector<ll> presumend(n);
    presumstr[0]=v[0];
 

    for(int i=1;i<n;i++){
      presumstr[i]=presumstr[i-1]+v[i];
    
    }
     presumend[n-1]=v[n-1];
    
     




    for(int i=n-2;i>=0;i--){
      presumend[i]=presumend[i+1]+v[i];
      
    }
    int i=0;
    int j=n-1;
    ll maxi=0;
    while(i<j){
      //cout<<presumend[j]<<" "<<presumstr[i]<<endl;
      if(presumend[j]==presumstr[i]){
        maxi=max(maxi,(i+1)+(n-(j)));
        i++;
        j--;
        continue;
      }
      if(presumstr[i]>presumend[j]){
        j--;
      }
      else if(presumstr[i]<presumend[j]){
        i++;
      }
      
    }
    cout<<maxi<<endl;


}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}