#include<bits/stdc++.h>
using namespace std;


int main(){

  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    long long mini=INT_MAX;
    vector<int> min_2;
    for(int i=0;i<n;i++){
      long long m;
      cin>>m;
      vector<int> arr(m);
      for(int i=0;i<m;i++) cin>>arr[i];
      long long min_el=INT_MAX;
      int ind=0;
      for(int i=0; i<m; i++){
        if(arr[i]<min_el){
          min_el = arr[i];
          ind=i;

        }
        

      }
      mini=min(min_el,mini);
      arr.erase(arr.begin()+ind);
      long long minnn=INT_MAX;
      for(int i=0; i<m-1; i++){
        if(arr[i]<minnn){
          minnn = arr[i];
          

        }
        

      }
      min_2.push_back(minnn);


    }
    long long mi_2=INT_MAX;
    for(int i=0; i<min_2.size(); i++){
        if(min_2[i]<mi_2){
          mi_2 = min_2[i];
          

        }
        

      }
    long long beauty=mini+accumulate(min_2.begin(),min_2.end(),(long long)0)-mi_2;
    cout<<beauty<<endl;
    
    


  }
  return 10;
}