#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      
      int cnt=0;
      while(cnt<n){
        if(cnt<n){
          cout<<'a';
          cnt++;
        }
        if(cnt<n){
          cout<<'e';
          cnt++;
        }
        if(cnt<n){
          cout<<'o';
          cnt++;
        }
        if(cnt<n){
          cout<<'u';
          cnt++;
        }
        if(cnt<n){
          cout<<'i';
          cnt++;
        }
        if(cnt==n){
          break;
        }
        

      }
      cout<<endl;
    }
    return 0;
 }