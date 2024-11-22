#include<bits/stdc++.h>
using namespace std;
int ans(vector<int> v,int n,int k){
  int min=k-v[0]%k;
  for(int i=0;i<n;i++){
    if(k-v[i]%k==k) return 0;
    else if(min>k-v[i]%k) min=k-v[i]%k;
  }
  return min;

}
int countEven(vector<int> v,int n){
  int cnt=0;
  for(int i=0;i<n;i++){
    if(v[i]%2==0) cnt++;
    
  }
  return cnt;

}
 int main(){
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int k;
      cin>>k;
      vector<int> v(n);
      for(auto& it:v){
        cin>>it;
      }
      int ansd=ans(v,n,k);
      
      if(k==4){
        int cntE=countEven(v,n);
        if(cntE>=2 || ansd==0) cout<<0<<endl;
        else if(cntE==1) cout<<1<<endl;
        else {
          cout<<min(ansd,2)<<endl;
        }
      }
      else{
        cout<<ansd<<endl;
      }
      

                            
      
    }
    return 0;
 }