#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int y,k;
        cin>>y>>k;
        if(x<=k && y<=k){
          cout<<x*y<<endl;
        }
        else if(x<=k){
          cout<<x*k<<endl;
        }
        else if(y<=k){
          cout<<y*k<<endl;
        }
        else{
          cout<<k*k<<endl;
        }
    }
    return 0;
}