#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k=n+1;
        vector<int> v(n);
        vector<int> u;
        for(int i=0;i<n;i++){
            cin>>v[i];
            int r=k-v[i];
            u.push_back(r);


        }
        for(int i:u){
            cout<<i<<" ";
        }
        cout<<endl;
        

    }
    return 0;
}