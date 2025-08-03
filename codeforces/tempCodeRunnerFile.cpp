#include<bits/stdc++.h>
using namespace std;
bool is_fair(long long n){
  string s=to_string(n);
  for(int i=0;i<s.length();i++){
    if(s[i]!='0' && n%(s[i]-'0')!=0) return false;
  }
  return true;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    //long long initialmupltiple=n/2520;
    //long long upperbound=(initialmupltiple+1)*2520;
    while(!is_fair(n)){
      n++;
    }
    cout<<n<<endl;
    
  }
  return 0;
  }
  
