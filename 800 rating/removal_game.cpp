#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      vector<int> v(n);
      vector<int> u(n);
      for(int i=0;i<n;i++){
        cin>>v[i];
      }
      for(int i=0;i<n;i++){
        cin>>u[i];
      }
      int i=0;
      int j=n-1;
      bool yes=true;
      for(int m=0;m<n/2;m++){
        if(v[i]==u[i]&& v[j]==u[j]){
          i++;
          j--;

        }
        else if(v[i]==u[j]&& v[j]==u[i]){
          i++;
          j--;

        }
        else {
          yes=false;
          break;
        }
      }
      if(yes) cout<<"Bob"<<endl;
      else cout<<"Alice"<<endl;
    }
    return 0;
}
