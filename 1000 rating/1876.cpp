#include<bits/stdc++.h>
using namespace std;
int small(vector<int> &ans1,vector<int> &ans2,int k,int &cnt){
  int small=k;
  int h;
  for(int i=0;i<ans1.size();i++){
    if(ans1[i]<small && ans2[i]>0){
      small=ans1[i];
      h=i;

    }
  }
  ans2[h]--;
  cnt++;
  return small;

}

int main(){

  int t;
  cin>>t;
  while(t--){
    long long n,k;
    cin>>n>>k;
    vector<int> v(n);
    vector<int> m(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    for(int i=0;i<n;i++){
      cin>>m[i];
    }
    vector<int> ans1;
    vector<int> ans2;
    for(int i=0;i<n;i++){
      if(m[i]<k){
        ans1.push_back(m[i]);
        ans2.push_back(v[i]);
      }
    }
    if(ans1.size()==0){
      cout<<n*k<<endl;
    }
    else {
      int cnt=1;
    int ans=k;
    while(cnt<n){
      ans+=small(ans1,ans2,k,cnt);

    }
    cout<<ans<<endl;

    }
    


  }
  return 0;
}