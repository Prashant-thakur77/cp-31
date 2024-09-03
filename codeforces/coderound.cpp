#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        map<int,int> mp;
        for(int i=0;i<n;i++){
          cin>>v[i];
          mp[v[i]]++;
        }
        ;
        int maxf=0;

        for(const auto& pair:mp){
          if(pair.second>maxf){
            maxf=pair.second;
            
          }

          
          


        }
        if(n==1||n==t)cout<<0<<endl;
        else cout<<n-maxf<<endl;
    }
    return 0;
 }