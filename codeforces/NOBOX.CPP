#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> mt(n,vector<int> (m,0));
    int sum=0;
    int flag=0;
    int mini=INT_MAX;
    int cnt=0;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        cin>>mt[i][j];
        if(mt[i][j]==0)flag=2;
        if(mt[i][j]<0) cnt++;
        sum=sum+abs(mt[i][j]);
        int no=abs(mt[i][j]);
        mini=min(mini,no);
      }
    }
    if(mini>0)mini=-mini;
   // cout<<"sum  "<<sum<<endl;
   // cout<<" mini"<<mini<<endl;
    if(flag==2)cout<<sum<<endl;
    else if(cnt%2==0)cout<<sum<<endl;
    else cout<<sum+2*mini<<endl;

    
   
  }
  return 0;
}
