#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<pair <int,int>> timesvisit;
    int ind=1;
    for(int i=0;i<n;i++){

      int x;
      cin>>x;
      timesvisit.push_back({x,ind});
      ind++;

    }
    vector<int> mul;
    for(int i=0;i<n;i++){
      mul.push_back(timesvisit[i].first);


    }
    sort(timesvisit.begin(),timesvisit.end());
    vector<int> ans(n+1);
    int done=(n+1)/2;
    if(n%2==0){
      done=n/2 + 1;
    }
   
    ans[0]=(n+2)/2;
    int j=n+1;
    int k=1;
    int times=0;
    while(k<done || j>done){
      ans[timesvisit[times].second]=j--;
      times++;
      if(k>=done)continue;
      ans[timesvisit[times].second]=k++;
      times++;
      


    }
    long long sum=0;
    int m=0;
    for(int i=1;i<=n;i++){
      sum+=(long long)2*abs(ans[i]-done)*mul[m++];
    }
    cout<<sum<<endl;
    for(int i=0;i<=n;i++){
      cout<<ans[i]<<" ";
    }
    cout<<endl;

    
   
  }
  return 0;
}
