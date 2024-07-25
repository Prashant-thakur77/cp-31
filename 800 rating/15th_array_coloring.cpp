#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,sum;
    cin>>t;
    

    while (t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sum=0;
        for(int i=1;i<n;i++){
            sum+=v[i];
        }
        if(v[0]%2==0 && sum%2==0) cout<<"YES"<<endl;
        else if(v[0]%2!=0 && sum%2!=0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}



