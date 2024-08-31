#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    
    cin>>t;
    while(t--){
      string s;
      cin>>s;
      int k;
      cin>>k;


      int n=s.length();
        int g=n/k;
        vector<int> v;
        for(int i=0;i<n;i++){
            v.push_back(s[i]-97);
            //cout<<v[i]<<endl;
        }
        string ans="";
        int sum=0;
        int cnt=0;
        vector<int> q;
        if(k==1) cout<< s<<endl;
        else{
            for(int i=0;i<n;i++){
            
            if((i%k==0 && i!=0) ){
                q.push_back(sum);
                
                sum=0;
                sum+=v[i];
                
                
                
                
                
            }
            else{
                sum=sum+v[i];
                //cout<<sum<<endl;
            
            
                
            }
            
            
            
            
            
            
            
        }
            
            
            
}
        
        q.push_back(sum);
        for(int i=0;i<g;i++){
           // cout<<q[i]<<endl;
            int c=q[i]%26;
            char w=char(c+97);
            ans+=w;
            
        }
        cout<<ans<<endl;
    }
    return 0;
}
        
        
        
                

        
        