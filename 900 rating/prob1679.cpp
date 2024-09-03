#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
      long long n;
      cin>>n;
      long long min;
      long long max;
      

      if(n<4|| n%2!=0) cout<<-1<<endl;
      else if(n==4) cout<<1<<" "<<1<<endl;
      else{
        long long min6=n/6;
        long long min4=0;
        if(min6*6+4!=n&& min6*6!=n ) {
          min6--;
          min4+=2;
        }
        else if(min6*6+4==n) min4++;
        cout<<min6+min4<<" ";
        long long max6=0;
        long long max4=n/4;
        if(max4*4+6!=n && max4*4!=n){
          max4--;
          max6++;
        }
        else if(max4*4+6==n) max6++;
        cout<<max4+max6<<endl;




        
        
      }
    }
      return 0;
    }