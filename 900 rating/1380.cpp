#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      vector<int> v(n);
      for(int i=0;i<n;i++){
        cin>>v[i];

      }
     
      int k=n;
      int j=0;
      while(k>0){
        if(k==v[j]   ){
          j++;
          //cout<<"yoo"<<endl;
        }
        else if( k==v[n-1]){
          n--;
        }
        else if(k!=v[j] && k!=v[n-1]){
           //cout<<"yoo1"<<endl;

          
          break;
        }
        k--;
      }
      int l=-1;

     for(int i=0;i<n;i++){
        if(v[i]==k){
          l=i+1;

        }

      }
      
      if(l==-1){
        cout<<"NO"<<endl;

      }
      else{
        cout<<"YES"<<endl;
        cout<<l-1<<" "<<l<<" "<<l+1<<endl;
      }


       
    }
    return 0;
 }
       