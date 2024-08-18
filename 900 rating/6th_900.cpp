#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    

    while (t--){
      long long n;
      cin>>n;
      int k=1;
      while(true){
        
        if(n%k!=0) break;
        else k++;
        

      }
      cout<<k-1<<endl;
    }
    return 0;
}