#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  
  cin>>t;
  while(t--){
    long long n,c;
    cin>>n>>c;
    vector<long long> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];

    }
    long long no=1;
    int cnt=0;
    sort(v.begin(),v.end());
    for(int i=n-1;i>=0;i--){
      if((double)v[i]*no<=c){
        cnt++;
        no=no*2;
      }
    }
    cout<<n-cnt<<endl;

      
    
    
  }
  return 0;
}