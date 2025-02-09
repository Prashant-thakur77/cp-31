#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
      long long n,m;
      cin>>n>>m;
      vector<long long> a(n);
      vector<long long> b(m);
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      for(int i=0;i<m;i++){
        cin>>b[i];
      }
      long long s=b[0];
      int flag=0;
      for(int i=0;i<n;i++){
        //cout<<a[i]<<endl;
        //cout<<s-a[i]<<endl;
        if(s-a[i]<=a[i] && i==0 ){
          //cout<<"yes1"<<endl;
          a[i]=s-a[i];
        }
        else if(i!=0 && i!=n-1){
          if(s-a[i]<=a[i]){
            if(a[i-1]<=s-a[i]){
              //cout<<"yes2"<<endl;
              a[i]=s-a[i];
            }
            else{
              flag=1;
              //cout<<"yes3"<<endl;
              break;

            }
          }
          else if(a[i-1]>a[i]){
            flag=1;
            //cout<<"yes4"<<endl;
            break;
          }
        }
        else{
          if(a[i-1]<=s-a[i] || a[i-1]<=a[i])
          flag=0;
          else flag=1;
        }
      }
      if(flag==0){
        cout<<"yes"<<endl;
      }
      else if(flag==1){
        cout<<"no"<<endl;
      }

      
    }
    return 0;
    
 }
