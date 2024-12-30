#include<bits/stdc++.h>
using namespace std;
 int main(){
   long long t;
    cin>>t;
    
    while(t--){
      int n;
      cin>>n;
      vector<int> cred(n);
      vector<int> scr(n);
      for(int i=0;i<n;i++){
        cin>>cred[i];
      }
      for(int i=0;i<n;i++){
        cin>>scr[i];
      }
      int sum1=0;
      int sum2=0;
      for(int i=0;i<n;i++){
        sum1+=cred[i]*scr[i];
        sum2+=cred[i];
      }
      cout<<sum1/sum2<<endl;

     
    
    }
    
    
    return 0;
 }
