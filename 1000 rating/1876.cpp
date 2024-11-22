#include<bits/stdc++.h>
using namespace std;


int main(){

  int t;
  cin>>t;
  while(t--){
    long long n,k;
    cin>>n>>k;
    vector<long long> v(n);
    vector<long long> m(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    for(int i=0;i<n;i++){
      cin>>m[i];
    }
    vector<pair<long long,long long>> cost;
    cost.push_back({k,n+1});
    for(int i=0;i<n;i++){
      cost.push_back(make_pair(m[i],v[i]));
    }
    sort(cost.begin(),cost.end());
    int cnt=1;
    long long costt=k;
    int ind=0;
    while(cnt<n){
      int left=n-cnt;
      if(cost[ind].second<=left){
        cnt+=cost[ind].second;
        costt+=cost[ind].first*cost[ind].second;
      }
      else{
        cnt=n;
        costt+=left*cost[ind].first;
      }
      ind++;
    }
    cout<<costt<<endl;
   
    


  }
  return 0;
}