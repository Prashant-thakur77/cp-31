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
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<set<char>> v(k);
    
    for(int i=0;i<n;i++){
      v[i%k].insert(s[i]);
    }
    ll cnt0=0;
    ll cntq=0;
    ll cnt1=0;
    bool ch=false;
    for(auto & s:v){
      if(s.size()==1){
        auto it =s.begin();
        if((*it)=='0')cnt0++;
        else if((*it)=='1')cnt1++;
        else cntq++;
      }
      else if(s.size()==2){{
        auto it =s.begin();
        if(*it=='0' && *(++it)=='?'){
          cnt0++;
          continue;
        }
        it =s.begin();
        if(*it=='1' && *(++it)=='?'){
          cnt1++;
          continue;
        }
        else{
          ch=true;
          break;

        }
        
        
        
      }


      }
      else{
        ch=true;
        break;
      }
    }
    if(ch){
      cout<<"no"<<endl;
      return;
    }
    if(cnt0<=k/2 && cnt1<=k/2){
      cout<<"yes"<<endl;
      return;
    }
    else cout<<"no"<<endl;18
    
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}