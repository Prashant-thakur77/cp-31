#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
            cin>>v[i];
            

    }
    int min=abs(v[0]);
    for(int i=1;i<n;i++){
        int t=abs(v[i]);
        
        if(min>t) min=t;
    }
    cout<<min<<endl;
    return 0;
}


