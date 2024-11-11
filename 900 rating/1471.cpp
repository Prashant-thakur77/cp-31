#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;
        vector<long long> v(n);
        long long sum1=0,sum2=0;
        for(int i=0;i<n;i++){
          cin>>v[i];
          sum1+=v[i];
          sum2+=ceil(v[i]/(double)x);
          cout<<ceil(v[i]/x)<<endl;
        }
        sum1=ceil(sum1/(double)x);
        cout<<sum1<<" "<<sum2<<endl;

       
    }
    return 0;
}

