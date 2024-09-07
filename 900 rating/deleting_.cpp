#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
      string s,a;
      cin>>s>>a;
      int n= s.size();
      string repl="0";
      int cnt=a.size()-1;
      int flag=0;
      for(int i=n-1;i>=0;i--){
        if(a[cnt]==s[i]){
         
          cnt--;
        if(cnt<0){
          flag=1;
          break;
          }
        }
      }
      
      int cnt1=a.size()-1;
      //cout<<cnt1<<endl;
      
        for(int i=n-1;i>=0;i--){
        //cout<<i<<endl;
        if(a[cnt1]==s[i]){
          s.replace(i,1,repl);

          //cout<<"flag:"<<flag<<s<<endl;
          //cout<<"hel                    llo                          "<<                      endl;
          
          for(int j=i;j<n;j++){
            if(a[cnt1]==s[j]){
              flag=2;
              break;
            }
          }
          cnt1--;
          
          
        }
        if(flag==2){
          break;
        }

        if(cnt1<0){
          
          break;
        }

      }

      

      
      //cout<<"flag:"<<flag<<s<<endl;
      if( flag==2|| flag==0){
        cout<<"NO"<<endl;
      }
      if(flag==1){
        cout<<"YES"<<endl;
      }
    }
    return 0;
 }
