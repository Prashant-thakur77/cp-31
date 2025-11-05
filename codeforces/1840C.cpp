#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n,k,q;
    cin>>n>>k>>q;
    vector<long long> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    vector<int> ans;
    int last=-1;
    for(int i=0;i<n;i++){
      if(v[i]>q){
        int len=i-last-1;
    
        last=i;
        ans.push_back(len);
      }


    }
    
    ans.push_back(n-last-1);
    long long sum=0;
    for(int i=0;i<ans.size();i++){
      if(ans[i]>=k){
        sum+=((ans[i]-k+1)*(ans[i]-k+2))/2;

      }
      
    }
    cout<<sum<<endl;


  }
  return 0;

}