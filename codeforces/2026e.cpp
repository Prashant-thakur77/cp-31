#include<bits/stdc++.h>
using namespace std;
int decimalToBinary(int N)
{
    // To store the binary number
    int quotient=N;
    int rem;
    unsigned long long  B_Number = 0;
    int place = 1;
    while (quotient!= 0) {
         rem = quotient % 2;
        B_Number+=rem*place;
        place*=10;
        quotient /= 2;
        
        
    }
    return B_Number;
}
 int main(){
    int t;
    cin>>t;
    while(t--){
      long long n;
      cin>>n;
      vector<long long> v(n);
      for(int i=0;i<n;i++){
        cin>>v[i];
      }
      long long ans=v[0];
       for(int i=1;i<n;i++){
        ans|=v[i];
      }
      cout<<ans<<"ans"<<endl;
      int x=decimalToBinary(ans);
      cout<<x<<"x"<<endl;
      string nish=to_string(x);
      cout<<nish<<"nish"<<endl;
      int flag=0;
      for(int i=0;i<nish.size();i++){
        if(nish[i]=='1'){
          flag++;
        }
        
        
      }
      cout<<n-flag<<endl;



    
      

    }
    
    return 0;
 }
