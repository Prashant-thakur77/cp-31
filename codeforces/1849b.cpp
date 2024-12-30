#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
      long long n,k;
      cin>>n>>k;
      vector<long long> v(n);
      for(int i=0;i<n;i++){
        cin>>v[i];
      }
      vector<pair<long long,long long> >ans;
      for(int i=0;i<n;i++){
        if(v[i]%k==0){
          ans.push_back({k,-i});
        }
        else{
          ans.push_back({v[i]%k,-i});
        }
      }
      sort(ans.begin(),ans.end());
      for(int i=n-1;i>=0;i--){
        cout<<abs(ans[i].second)+1<<" ";
      }
      cout<<endl;

      

      

      
      
    }
    
    return 0;
 }
