#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
      long long n,k;
      cin>>n>>k;
      
      unordered_map<long long,long long> mp;
      int cnt=0;
      for(int i=0;i<n;i++){
        int num;
        cin>>num;
        if(mp[k-num]!=0){
          cnt++;
          mp[k-num]--;
        }
        else{
          mp[num]++;
        }
       

      }
      cout<<cnt<<endl;




      


      
      
      


      
    }
 }
