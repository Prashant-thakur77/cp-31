#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
      long long n,k;
      cin>>n>>k;
      vector<int> v(n);

      for(int i=0;i<n;i++){
        cin>>v[i];
      }
      unordered_map<long long,long long> mp;
      for(int i=0;i<n;i++){
        mp[v[i]]++;
        
      }
      int cnt=0;
      for(int i=0;i<n;i++){
        int a=k-v[i];
        if(a==v[i]){
          if(mp[a]>=2){
            cnt++;
            mp[a]=mp[a]-2;
          }

        }
        else if(mp[a]!=0 && mp[a]>0 && mp[v[i]]>0){
          
          cnt++;
          mp[v[i]]--;
          mp[a]--;
        }
        

      }
      cout<<cnt<<endl;




      


      
      
      


      
    }
 }
