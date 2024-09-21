#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      vector<long long> v(n);
      for(int i=0;i<n;i++){
        cin>>v[i];
      }
      long long last=v[n-1];
      long long seclast=v[n-2];
      long long sum=0;
      for(int i=0;i<n-2;i++){
        sum+=v[i];
      }
      long long an=last-(seclast-sum);
      cout<<an<<endl;
    }
    return 0;
 }