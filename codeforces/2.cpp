#include<bits/stdc++.h>
using namespace std;
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
    int cnt1=1;
    int cnt2=n-1;
    string s="L";
    long long last=v[0];
    long long last2=-1;
    int flag=0;
    while(cnt1<=cnt2){
      if(v[cnt1]>last && v[cnt2]>last){
        long long r=max(v[cnt1],v[cnt2]);
        flag=2;
        if(r==v[cnt1]){
          s=s+"L";
          last=v[cnt1];
          cnt1++;

        }
        else{
          s=s+"R";
          last=v[cnt2];
          cnt2--;

        }

      }
      else if(v[cnt1]<last && v[cnt2]<last){
        long long r=min(v[cnt1],v[cnt2]);
        flag=1;
        if(r==v[cnt1]){
          s=s+"L";
          last=v[cnt1];
          cnt1++;

        }
        else{
          s=s+"R";
          last=v[cnt2];
          cnt2--;

        }

      }
      if(v[cnt1]>last && v[cnt2]<last){
        if(flag==1){
          s=s+"L";
          last2=last;
          last=v[cnt1];
          cnt1++;
          flag=0;

        }
        else {
          s=s+"R";
          last2=last;
          last=v[cnt2];
          cnt2--;
          
        }
        
      }
      else if(v[cnt1]<last && v[cnt2]>last){
        if(flag==1){
          s=s+"R";
          last2=last;
          last=v[cnt2];
          cnt2--;

        }
        else{
          s=s+"L";
          last2=last;
          last=v[cnt1];
        cnt1++;

        }
        

      }
      
      
        
        
        

      
    }
    cout<<s<<endl;
    
  }
  return 0;
}