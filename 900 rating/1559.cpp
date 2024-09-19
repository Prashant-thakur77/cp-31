#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
      int x;
      cin>>x;
      vector<long long> v(x);
      for(int i=0;i<x;i++){
        cin>>v[i];
      }
      long long a;
      long long mini=v[0];
      for(int i=0;i<x;i++){
        a=v[i]&mini;
        mini=min(mini,a);


      }
      cout<<mini<<endl;
    }
    return 0;
 }