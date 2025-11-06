#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false);cin.tie(nullptr)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define pb push_back
#define mod 1000000007

void solve(){
    int n;
    cin>>n;
    vector<ll> a(n);
    for(auto &x:a){
      cin>>x;
    }
    vector<ll> o,e;
    for(auto x:a){
      (x&1?o:e).pb(x);
    }
    pair<ll,ll>res={-1,-1};
    bool ok=0;
    if(e.size()>=2){
        res={e[0],e[1]};
        ok=1;
    }
    else if(o.size()>=2){
        for(int i=1;i<o.size()&&!ok;i++){
          if(o[i]<2*o[i-1]){
            res={o[i-1],o[i]};
            ok=1;
          }
        }
        if(!ok&&o.size()<=30){
            for(int i=0;i<o.size()&&!ok;i++)
                {
                  for(int j=i+1;j<o.size()&&!ok;j++){
                    if((o[j]%o[i])%2==0){
                      res={o[i],o[j]};
                      ok=1;
                    }

                  }
                }
                    
        }
    }
    if(!ok&&e.size()==1){
        for(auto x:o){
          if(x<e[0]&&((e[0]%x)%2==0))
          {
            res={x,e[0]};
            ok=1;
            break;
          }
    }
  }
    if(ok)cout<<res.first<<" "<<res.second<<endl;
    else cout<<-1<<endl;
}

int32_t main(){
    fast_io;
    int t;cin>>t;
    while(t--)solve();
    return 0;
}
