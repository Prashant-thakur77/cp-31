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
      int maxele=INT_MIN;
      for(int i=0;i<n;i++){
        if(v[i]>maxele){
          maxele=v[i];
        }
      }
      int ans=0;
      for(int i=0;i<n;i++){
        if(v[i]==maxele && i%2==0){
          ans=1;
        }
      }
      if(n%2==0 || ans==0){
        cout<<(n/2)+maxele<<endl;
      }
      else if(ans==1){
        cout<<(n/2)+1+maxele<<endl;
      }
    }
    return 0;
}
      
