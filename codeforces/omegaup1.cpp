#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007

vector<pair<int,int>> func2(vector<pair<int,int>> v){
    int r0=INT_MAX;
    int c0=INT_MAX;
    for(int i=0; i<(int)v.size();i++){
        r0=min(r0,v[i].first);
        c0=min(c0,v[i].second);
    }
    for(int i=0;i<(int)v.size();i++){
        v[i].first -=r0;
        v[i].second -=c0;
    }
    sort(all(v));
    return v;
}

vector<pair<int,int>> rot(vector<pair<int,int>> v){
    vector<pair<int,int>> t;
    for(int i=0;i<(int)v.size();i++){
      t.pb({v[i].second,-v[i].first});

    }
        
    return func2(t);
}

vector<pair<int,int>> flp(vector<pair<int,int>> v){
    vector<pair<int,int>> t;
    for (int i = 0; i < (int)v.size(); i++)
        t.pb({v[i].first, -v[i].second});
    return func2(t);
}

vector<vector<pair<int,int>>> func1(vector<pair<int,int>> v){
    set<vector<pair<int,int>>> seen;
    vector<vector<pair<int,int>>> res;
    vector<pair<int,int>> cur=func2(v);
    for(int f=0;f<2;f++){
        vector<pair<int,int>> tmp=cur;
        for(int r=0;r<4;r++){
            vector<pair<int,int>> n=func2(tmp);
            if(!seen.count(n)){
              seen.insert(n);
              res.pb(n);
            }
            tmp=rot(tmp);
        }
        cur=flp(cur);
    }
    return res;
}

void solve() {
    int W,H;
    cin>>W>>H;

    vector<pair<int,int>> pc;
    for(int i=0;i<H;i++){
      for(int j=0;j<W;j++){
            int x;
            cin>>x;
            if (x) {
              pc.pb({i, j});
            }
        }

    }
        

    int R,C;
    cin>>R>>C;

    vector<vector<int>> g(R,vector<int>(C));
    for(int i=0;i<R;i++){
      for(int j=0;j<C;j++){
        cin>>g[i][j];

      }
            

    }
        

    vector<vector<pair<int,int>>> ors=func1(pc);
    for(int o=0;o<ors.size();o++){
        vector<pair<int,int>>& ori=ors[o];
        int mr=0;
        int mc=0;
        for(int i=0;i<(int)ori.size();i++){
            mr=max(mr,ori[i].first);
            mc=max(mc,ori[i].second);
        }
        for(int dr=0;dr+mr<R;dr++){
            for(int dc=0;dc+mc<C;dc++){
                bool ok=true;
                for(int i=0;i<ori.size();i++)
                    if(g[dr+ori[i].first][dc+ori[i].second]){
                       ok=false; 
                       break; 

                    } 
                if(ok){ 
                  cout<<"YES"<<endl;
                  return; 
                }
            }
        }
    }
    cout << "IMPOSSIBLE"<<endl;
}

int main() {
    fast_io;
    solve();
    return 0;
}
