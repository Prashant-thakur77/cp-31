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
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<n;i++){
      if(s[i]!='.')cnt++;
    }
    ll no=cnt/2;
    if(no==0){
      cout<<0<<endl;
      return;
    }
    vector<int> v1;
    int cnt1=1;
    for(int i=0;i<n;i++){
      if(s[i]!='.'){
        v1.push_back(i);
      }
    }
    ll ans=0;
    if(cnt%2==1){
      for(int i=0,j=no;i<no;i++,j--){
      ans+=abs(v1[no]-v1[i])-j;
      }
      for(int i=no+1,j=1;i<v1.size();i++,j++){
      ans+=abs(v1[i]-v1[no])-j;
      }

    }
    else{
      for(int i=0,j=no;i<no;i++,j--){
      ans+=abs(v1[no]-v1[i])-j;
    //cout<<"yes1"<<endl;
      }
      for(int i=no+1,j=1;i<v1.size();i++,j++){
      ans+=abs(v1[i]-v1[no])-j;
      //cout<<no<<" "<<v1[i]<<" "<<"j "<<j<<" "<<ans<<endl;
      //cout<<"yes2"<<endl;
      }

    }
    cout<<ans<<endl;
    return;
     
    



}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}