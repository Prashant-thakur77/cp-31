#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      vector<int> v(n);
      for(int i=0;i<n;i++){
        cin>>v[i];
      }
      int maxcount=0;
      int ans=0;
     for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (v[i] == v[j])
                count++;
        }

        if (count > maxcount) {
            maxcount = count;
            
        }
    }
      //cout<<n-ans<<endl;
      cout<<n-maxcount<<endl;



      

    }
    
    return 0;
 }
