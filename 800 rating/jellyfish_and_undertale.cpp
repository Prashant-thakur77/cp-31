#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    

    while (t--){
      long long a,b,n;
      cin>>a>>b>>n;
      vector<long long> tools(n);
      for(int i=0;i<n;i++){
        cin>>tools[i];
      }
      for(auto& it:tools){
        if(it>=a){
          it=a-1;
        }
        //cout<<it<<endl;
      }
      long long sum=b;
      for(auto& it:tools){
        sum+=it;
      }
      cout<<sum<<endl;
    }
    return 0;
}