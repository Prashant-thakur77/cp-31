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
    int sum=v[0];
    int maxi=v[0];
    int last=v[0];
    //cout<<"sum   "<<sum<<endl;
    for(int i=1;i<n;i++){
      if(sum<0){
        sum=0;
      }
     
      if(last%2==0 && v[i]%2!=0){
        sum+=v[i];
       //  cout<<"hello1"<<sum<<endl;
        if(last<0){
          maxi=max(maxi,sum);
          maxi=max(maxi,v[i]);
          last=v[i];
         

        }
        else{
            last=v[i];
        maxi=max(maxi,sum);

        }
      }
      
      else if(last%2!=0 && v[i]%2==0){
        sum+=v[i];
       // cout<<"hello2"<<sum<<endl;
        if(last<0){
          maxi=max(maxi,sum);
          maxi=max(maxi,v[i]);
          last=v[i];
          

        }
        else{
            last=v[i];
        maxi=max(maxi,sum);

        }
      

      }
      else{
        sum=v[i];
        last=v[i];
        maxi=max(maxi,sum);
      }
      //cout<<"sum   "<<sum<<endl;
     // cout<<"maxi   "<<maxi<<endl;


    }
    cout<<maxi<<endl;
   
    
  }
  return 0;
}