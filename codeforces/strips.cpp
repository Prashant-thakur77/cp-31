#include<bits/stdc++.h>
using namespace std;
int countConsecBlack(string s,int mid,int W,int B){
  int n=s.size();
  int cnt1=0;
  int cnt2=n-1;
  if(B==0)return mid;
  
  else if(B==1)return mid+1;
  int noofblackinside=B-2;

  while(cnt1<=cnt2){
    if(s[cnt1]!='B'){
      cnt1++;
      continue;
      
    }
    else if(s[cnt2]!='B'){
      cnt2--;
      continue;
    }
   
    int whiteinside=cnt2-cnt1-noofblackinside-1;
    if(whiteinside==mid){
      return cnt2-cnt1+1;

    }
    else if(whiteinside<mid){
      return noofblackinside+2+mid;
    }
    else{
      cnt1++;
      noofblackinside--;
    }
    

  }



}
int main(){
  int t;
  
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int cntB=0;
    int cntW=0;
   
    for(int i=0;i<n;i++){
      if(s[i]=='W')cntW++;
      else cntB++;
    }
     int flag=0;
    
    
      int low=0;
      int high=n-cntB;
      while(low<=high){
        int mid=low+(high-low)/2;
        int maxBlack=countConsecBlack(s,mid,cntW,cntB);
        if(maxBlack>=k)high=mid-1;
        else low=mid+1;
      }
    cout<<low<<endl;


    
    
   

      
    
    
  }
  return 0;
}