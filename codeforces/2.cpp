#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    vector<long long> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    int cnt1=0;
    int cnt2=n-1;
    string s="";
    while(s.length()!=n){
      if(v[cnt1]>v[cnt2]){
        s=s+"L";
        cnt1++;
      }
      else{
        s=s+"R";
        cnt2--;
      }
      if(s.length()==n)break;
      if(v[cnt1]<v[cnt2]){
        s=s+"L";
        cnt1++;
      }
      else{
        s=s+"R";
        cnt2--;
      }
    }
    cout<<s<<endl;
    
        
        
        


    
  }
  return 0;
}