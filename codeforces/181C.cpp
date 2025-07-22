#include<bits/stdc++.h>
using namespace std;
long long ifdiv(long long l,long long r,long long n){
  return r/n -(l-1)/n;
}
long long lcm(long long a,long long b){
  return (a*b)/__gcd(a,b);
}
int main(){
  int t;
  cin>>t;
  while(t--){
    long long l,r;
    cin>>l>>r;
    int a=2,b=3,c=5,d=7;
    long long total=r-l+1;
    long long A=ifdiv(l,r,a);
    long long B=ifdiv(l,r,b);
    long long C=ifdiv(l,r,c);
    long long D=ifdiv(l,r,d);
    long long AB=ifdiv(l,r,lcm(a,b));
    long long BC=ifdiv(l,r,lcm(b,c));
    long long CD=ifdiv(l,r,lcm(c,d));
    long long DA=ifdiv(l,r,lcm(d,a));
    long long BD=ifdiv(l,r,lcm(b,d));
    long long CA=ifdiv(l,r,lcm(c,a));
    long long ABC=ifdiv(l,r,lcm(a,lcm(b,c)));
    long long BCD=ifdiv(l,r,lcm(b,lcm(d,c)));
    long long CDA=ifdiv(l,r,lcm(c,lcm(d,a)));
    long long DAB=ifdiv(l,r,lcm(d,lcm(a,b)));
    long long ABCD=ifdiv(l,r,lcm(d,lcm(a,lcm(b,c))));
    long long ans=A+B+C+D-AB-BC-CD-DA+ABC+BCD+CDA+DAB-ABCD-CA-BD;
    cout<<total-ans<<endl;




    
  }
  return 0;
}