#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
      string s;
      cin>>s;
      int n=s.size();
      int cnt=0;
      for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
          cnt++;

        }
      }
      if(cnt==0 && n!=1){
        cout<<n<<endl;
      }
      else cout<<1<<endl;

    }
    return 0;
    
 }
