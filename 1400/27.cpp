#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007
vector<int> v,w;
int find(int a){
  if(v[a]==a)return a;
  else return v[a]=find(v[a]);
}
void join(int a,int b){
  a=find(a);
  b=find(b);
  if(a==b)return;
  if(w[a]<w[b])swap(a,b);
  v[b]=a;
  w[a]+=w[b];
}

void solve() {
    // Your code here
    int n,m;
    cin>>n>>m;
    v.resize(n,0);
    for(int i=0;i<n;i++){
      v[i]=i;
    }
    w.resize(n,1);
    for(int i=0;i<m;i++){
      int k;
      cin>>k;
      int first;
      if(k) cin>>first;
      first--;
      for(int i=1;i<k;i++){
        int a;
        cin>>a;
        a--;
        join(first,a);
        
      }
    }
    for(int i=0;i<n;i++){
      cout<<w[find(i)]<<" ";
    }
    cout<<endl;
    return;


}

int32_t main() {
    solve();
    return 0;
}