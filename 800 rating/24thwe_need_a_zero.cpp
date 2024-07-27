#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    

    while (t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int xor_sum=accumulate(v.begin(),v.end(),0,bit_xor<int>());
        if(n%2!=0){
            cout<<xor_sum<<endl;

        }
        else{
            if(xor_sum==0) cout<<1<<endl;
            else cout<<-1<<endl;
        }
    }
    return 0;
}