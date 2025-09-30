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
    ll n;
    cin>>n;
    vector<pair<int,int>> v;
    ll sum=0;
    int x;
    for(int i=0;i<n;i++){
      cin>>x;
      sum+=x;
      v.push_back({x,i+1});

    }
    sort(rall(v));
    ll news=sum-v[0].first;
    int cnt=0;
    vector<int> ans;
    bool ok=false;
    if(v[1].first*2==news){
      cnt++;
      ans.push_back(v[0].second);
      //cout<<v[0].first<<" "<<v[1].first<<endl;
      ok=true;
    }
    ll no=sum-v[0].first*2;
    for(int i=1;i<n;i++){
      //cout<<v[i].first<<" "<<v[i].second<<endl;
      if(i==1 && ok==false &&v[i].first==no ){
        //cout<<v[i].first<<" "<<v[i].second<<endl;
        cnt++;
        ans.push_back(v[i].second);


      }
      else if(v[i].first==no ){
        //cout<<v[i].first<<" "<<v[i].second<<endl;
        cnt++;
        ans.push_back(v[i].second);


    }
  }
    cout<<cnt<<endl;
    if(cnt==0)return;
    for(int i=0;i<ans.size();i++){
      cout<<ans[i]<<" ";
    }
    cout<<endl;
    return;




}

int32_t main() {
    solve();
    return 0;
}