#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<long long> v(n*k);
        for(int i=0;i<n*k;i++){
          cin>>v[i];
        }
        long long sum=0;
        long long i=n*k;
        while(k--){
          i=i-(n/2+1);
          sum+=v[i];

        }
        cout<<sum<<endl;
        
        


    }
    return 0;
}

