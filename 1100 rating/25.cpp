#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code here
    string s;
    cin>>s;
    unordered_map<char,int> mp;
    int n=s.size();
    for(int i=0;i<n;i++){
      mp[s[i]]++;
    }
    int no=mp.size();
    if(no==1){
      cout<<"yes"<<endl;
      return;
    }
  // cout<<no<<endl;
    string k=s.substr(0,no);
   // cout<<k<<endl;
    int cnt=0;
    for(int i=no;i<n;i++){
      if(cnt==no)cnt=0;
      if(s[i]!=k[cnt]){
        //cout<<s[i]<<" "<<k[cnt]<<endl;
        cout<<"no"<<endl;
        return;

      }
      else cnt++;
      
    }
    cout<<"yes"<<endl;
    return;





}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}