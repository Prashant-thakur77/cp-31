#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n;
  cin>>n;
  string s;
  cin>>s;
  int bigyet=0;
  int end=-1;
  for(int i=1;i<n;i++){
    if(s[bigyet]>s[i]){
      end=i;
      break;
      
    }
    else bigyet=i;
    //cout<<"bigyet  "<<bigyet<<endl;
  }
  if(end==-1){
    cout<<"NO"<<endl;
  }
  else{
    string t=s.substr(bigyet,end-bigyet+1);
    reverse(t.begin(),t.end());
    cout<<"YES"<<endl;
    //cout<<t<<endl;
    cout<<bigyet+1<<" "<<end+1<<endl;

  }
  
  

  return 0;
}