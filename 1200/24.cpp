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
    string s;
    cin>>s;
   
    string mex="";
    for(char i='a';i<='z';i++){
      if(s.find(i)==string::npos){
        mex=i;
        cout<<mex<<endl;
        return;
      }
      
    }
    for(char i='a';i<='z';i++){
      for(char j='a';j<='z';j++){
        mex="";
        mex.push_back(i);
        mex.push_back(j);
        if(s.find(mex)==string::npos){
          cout<<mex<<endl;
          return;
        }
      }
    }
       for(char i='a';i<='z';i++){
      for(char j='a';j<='z';j++){
        for(char c='a';c<='z';c++){
          mex="";
          mex.push_back(i);
        mex.push_back(j);
        mex.push_back(c);
        if(s.find(mex)==string::npos){
          cout<<mex<<endl;
          return;
        }

        }
        
      }
      
      
      
    }
    
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}