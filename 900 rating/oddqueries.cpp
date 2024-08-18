#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    

    while (t--){
      long long n,y;
      
     

      cin>>n>>y;

      vector<long long> v(n+1);
      for(int i=1;i<=n;i++){
        cin>>v[i];
        
        
      }
      vector<long long> psum(n+1);
      for(int i=1;i<=n;i++){
        psum[i]=psum[i-1]+v[i];
        
        
      }
      
      while(y--){
        long long l,r,k;
        cin>>l>>r>>k;
        long long sum=psum[l-1]-psum[r]+k*(r-l+1)+psum[n];
        if(sum%2!=0){
          cout<<"yes"<<endl;


        }
        else cout<<"no"<<endl;
     

      }
    }
    return 0;
}
