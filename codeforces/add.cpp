#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long a;
    long long b;
    cin>>a>>b;
    int ans=1e9;
    for(int i=0;i<10;i++){
      long long c=a;
      if((b+i)>=2){
        int turns=i;
        while (c>0)
        {
          c=c/(b+i);
          turns++;
        }
        ans=min(turns,ans);
        

      }
    }
    cout<<ans<<endl;
  }
  return 0;

}