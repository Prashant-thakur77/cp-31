#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    string s,t;
    cin>>s>>t;
    int n=s.size();
    int m=t.size();

    int maxlength=0;
    for(int i=0;i<n;i++){
      for(int j=1;j<=n-i;j++){
        string k=s.substr(i,j);
        if(t.find(k)!=string::npos){
          maxlength=max(maxlength,j);
        }
      }
    }
    cout<<n+m-2*maxlength<<endl;

    
  }
  return 0;
}
