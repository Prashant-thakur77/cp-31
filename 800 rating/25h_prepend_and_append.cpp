#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string k;
        cin>>n;
        int o=n;
        cin>>k;
        int t=0;
        int j=n-1;
        for(int i=0;i<n/2;i++){
            if(k[t]==48 && k[j]==49 ||k[t]==49 && k[j]==48  ){
                t++;
                j--;
                o=o-2;
            }
            else break;
        }
        cout<<o<<endl;
    }
    return 0;
}