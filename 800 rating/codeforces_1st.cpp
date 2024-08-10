#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    

    while (t--){
        int x,y;
        cin>>x>>y;
        int k;
        cin>>k;
        if(k==1){
          cout<<x<<" "<<y<<endl;

        }
        else{
          for(int i=1;i<k;i++){
            cout<<i<<" "<<i<<endl;
          }
          int sum=((k-1)*(k))/2;
          int x1=k*x-sum;
          int y1=k*y-sum;
          cout<<x1<<" "<<y1<<endl;
        }
    }
    return 0;
}