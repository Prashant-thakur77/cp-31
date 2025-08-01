#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    set<long long> st;

    for(int i=0;i<n;i++){
      long long no;
      cin>>no;
      st.insert(no);
      

    }
    
    if(st.size()==n)cout<<"no"<<endl;
    else cout<<"yes"<<endl;



  }
  return 0;


}