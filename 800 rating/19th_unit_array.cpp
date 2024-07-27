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
        int cnt1=0;
        int cnt2=0;
        for(int i=0;i<n;i++){
            if(v[i]==1) cnt1++;
            else cnt2++;
        }
        int c=0;
        while(cnt2>cnt1){
            cnt2--;
            cnt1++;
            c++;
        }
        if(cnt2%2==0) cout<<c<<endl;
        else cout<<c+1<<endl;
        
    }
    return 0;
}
