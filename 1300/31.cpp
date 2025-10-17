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
    int n=s.length();
    for(int i=1;i<n;i++){
      if(s[i]==s[i-1]){
        for(char i1='a';i1<='z';i1++){
          if(i1!=s[i-1] && i1!=s[i+1]){
            s[i]=i1;
            break;
            
          }
        }
      }
    }
    cout<<s<<endl;
    return;
    
}

int32_t main() {
     solve();
    return 0;
}