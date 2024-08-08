#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    

    while (t--){
      int n;
      cin>>n;
      long long k;
      cin>>k;
      vector<long long> v(n);
      for(int i=0;i<n;i++){
        cin>>v[i];
      }
      long long cnt=0;
      long long y=0;
      sort(v.begin(),v.end());
      for(int i=0;i<n-1;i++){
        
        if(abs(v[i]-v[i+1])<=k){
          y++;
          cnt=max(cnt,y);

        }
        else y=0;        
      }
      cout<<y+1<<endl;
    }
    return 0;
}