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
    string s;
    cin>>s;
    int n=s.size();
    if(s[0]=='*'){
      if(s[1]=='<' || s[1]=='*'){
        cout<<-1<<endl;
        return;
      }
    }
    if(s[n-1]=='*'){
      if(s[n-2]=='>'|| s[n-2]=='*'){
        cout<<-1<<endl;
        return;
      }
    }
    int check=0;
    int check2=0;
    for(int i=1;i<n-1;i++){
      if(s[i]=='*'){
        check=1;
        if(!(s[i-1]=='<' && s[i+1]=='>'))check2=1;
      }
    }
    if(check==1 && check2==1){
      cout<<-1<<endl;
      return;
    }
    int check3=0;
    for(int i=1;i<n;i++){
      if(s[i-1]=='>' && s[i]=='<')check3=1;
    }
    if(check3==1){
      cout<<-1<<endl;
      return;
    }
    int check4=0;
    ll cntleft=0;
    ll cntright=0;
    for(int i=0;i<n;i++){
      if(s[i]=='*'){
        check4=1;
      }
      if(s[i]=='<')cntleft++;
      if(s[i]=='>')cntright++;
    }
    
    if(check4){
      cout<<max(cntleft,cntright)+1<<endl;
    }
    else cout<<max(cntleft,cntright)<<endl;

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}