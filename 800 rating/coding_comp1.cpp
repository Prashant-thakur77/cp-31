#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int c=n%10;
      int d=n/10;
      cout<<c+d<<endl;
    }
    return 0;
}