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
    vector<string> ans;
    int n,k;
    cin>>n>>k;
    string s;
    string w;
    cin>>s>>w;
    if(s==w){
      cout<<0<<endl;
      return;
    }
    else if(s[0]!=w[0]){
      cout<<-1<<endl;
      return;
    }
    int cnt=0;
    
      for(int i=0;i<k;i++){
        string t=s;
        cnt++;
        for(int j=1;j<n;j++){
          
            if(j+1<n && s[j-1]==w[j+1])t[j]=s[j-1];
           else if(s[j]==w[j])continue;
          else if(w[j]==s[j-1]){
            t[j]=s[j-1];
          }
         
          
        }
        ans.push_back(t);
        if(t==w){
          cout<<cnt<<endl;
          for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<endl;
          }
         
          return;


        }
        
        s=t;
      }
      

    
    cout<<-1<<endl;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}