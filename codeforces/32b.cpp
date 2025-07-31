#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,s;
    cin>>n>>s;
    vector<int> v(n);
    int cnt0=0;
    int cnt1=0;
    int cnt2=0;
    int sum=0;
    for(int i=0;i<n;i++){
      cin>>v[i];
      sum+=v[i];
      if(v[i]==0)cnt0++;
      else if(v[i]==1)cnt1++;
      else cnt2++;
    }
   
    if(s==sum+1 || s<sum){
      while(cnt0--){
        cout<<0<<" ";
      }
      while(cnt2--){
        cout<<2<<" ";
      }
      while(cnt1--){
        cout<<1<<" ";
      }
      cout<<endl;
    }
    else if(s==sum && s!=3){
      while(cnt1--){
        cout<<1<<" ";
      }
       while(cnt2--){
        cout<<2<<" ";
      }
      while(cnt0--){
        cout<<0<<" ";
      }
      cout<<endl;

    }
     else {
      cout<<-1<<endl;

    }
    
    

  }
  return 0;

}