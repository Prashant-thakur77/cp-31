#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  
  cin>>t;
  while(t--){
    int w,h;
    cin>>w>>h;

    int x1;
    cin>>x1;
    vector<int> v1(x1);
    for(int i=0;i<x1;i++){
      cin>>v1[i];
 
      
    }

    int x2;
    cin>>x2;
    vector<int> v2(x2);
 
    for(int i=0;i<x2;i++){
      cin>>v2[i];
     
      
    }
  
    int y1;
    cin>>y1;
    vector<int> v3(y1);
    for(int i=0;i<y1;i++){
      cin>>v3[i];
    }
    int y2;
    cin>>y2;
    vector<int> v4(y2);
 
    for(int i=0;i<y2;i++){
      cin>>v4[i];
      
    }
    int maxv1=v1[x1-1]-v1[0];
    int maxv2=v2[x2-1]-v2[0];
    int maxv3=v3[y1-1]-v3[0];
    int maxv4=v4[y2-1]-v4[0];
    int maxi1=max(maxv1,maxv2);
    int maxi2=max(maxv3,maxv4);
    long long area1=(long long)h*maxi1;
    long long area2=(long long)w*maxi2;
    long long finalmax=max(area1,area2);
    cout<<(finalmax)<<endl;
    //cout<<maxv1<<" "<<maxv2<<" "<<maxv3<<" "<<maxv4<<" "<<maxi1<<" "<<maxi2<<" "<<area1<<endl;


  }
  return 0;
}