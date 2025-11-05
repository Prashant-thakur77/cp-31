#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  //21   a +b =21    a,b min lcm *hcf=a*b  __gcd(a,b) 
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    int a=1;
    for(long long i=2;i*i<=n;i++){
      if(n%i==0){
        a=n/i;
        break;
      }

    }
    cout<<a<<" "<<n-a<<endl;
    
    
    
      

  }
  return 0;
}