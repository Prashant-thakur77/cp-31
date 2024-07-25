#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    

    while (t--){
        int n,h;
        cin>>n;
        vector <int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        h=v[0];
        
        
        for(int i=0;i<n-1;i++){
            if(h>v[i+1]) h=v[i+1];
            
        }
        vector <int> b;
        vector<int> c;
        for(int i=0;i<n;i++){
            if(h==v[i]) b.push_back(v[i]);
            else c.push_back(v[i]);
        }
        if(c.size()==0) cout<<-1<<endl;
        else{
            cout<<b.size()<<" ";
            cout<<c.size()<<endl;
            for(int i=0;i<b.size();i++){
                cout<<b[i]<<" ";
            }
            cout<<endl;
            for(int i=0;i<c.size();i++){
                cout<<c[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}

            

