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
    ll n,x,m;
    cin>>n>>x>>m;
    vector<pair<int,int>> v;
    for(int i=0;i<m;i++){
      int x1,y1;
      cin>>x1>>y1;
      v.push_back({x1,y1});
    }
    int no=0;
    int lastx=v[0].first;
    int lasty=v[0].second;
    if(v[0].first<=x && v[0].second>=x){
      lastx=v[0].first;
      lasty=v[0].second;

        
      no=lasty-lastx+1;
    }
    else {
      lastx=-1;
      lasty=-1;
    }
    for(int i=1;i<m;i++){
      //cout<<lastx<<" "<<lasty<<endl;
      if(no==n)break;
      if(lastx==-1 && lasty==-1){
        if(v[i].first<=x && v[i].second>=x){
          lastx=v[i].first;
          lasty=v[i].second;
          
          

          no=lasty-lastx+1;
        }

      }
      else{
        if(v[i].first<=lastx && v[i].second>=lasty){
          lastx=v[i].first;
          lasty=v[i].second;
          
          no=lasty-lastx+1;


        }
        else if(v[i].second>=lasty && v[i].first<=lasty){
          lasty=v[i].second;
          
          no=lasty-lastx+1;

        }
        else if(v[i].first<=lastx && v[i].second>=lastx){
          lastx=v[i].first;
          no=lasty-lastx+1;
        }

      }
    }
    
    cout<<lasty-lastx+1<<endl;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}