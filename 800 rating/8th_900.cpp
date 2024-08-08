#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    

    while (t--){
      int n;
      cin>>n;
      string s;
      cin>>s;
      int y=0;
      int k=0;
      int cnt=0;
      int cnt1=0;


       for(int i=0;i<n;i++){
        
        if(s[i]=='>'){
          y++;
          cnt=max(cnt,y);
          k=0;
          

        }
        else if(s[i]=='<'){
          k++;
          cnt1 = max(cnt1,k);
          y=0;
        }        
      }
      int l=max(cnt,cnt1);
      cout<<l+2-1<<endl;
    }
    return 0;
}