#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int cnt=0;
        string s;
        cin>>s;
        map<char,int> mp;
        for(int i=0;i<n;i++){
          mp[s[i]]++;
        }
        /*for(auto& it:mp){
          cout<<it.first<<":"<<it.second<<endl;
        }*/
        if(n-k==1) cout<<"yes"<<endl;
        else{
           for(auto& it:mp){
            //cout<<it.second<<endl;
            while(it.second>=2){
              it.second-=2;
              cnt+=1;
            }

           }
           //cout<<cnt<<endl;
           if(cnt>=(n-k)/2) cout<<"yes"<<endl;
           else cout<<"no"<<endl;



        }
    }
    return 0;
}

