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
      int c=*min_element(v.begin(),v.end());
      int b=*max_element(v.begin(),v.end());
      cout<<(b-c)*(n-1)<<endl;
    }
    return 0;
 }
