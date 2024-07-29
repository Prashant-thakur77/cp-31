#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    

    while (t--){
        int n;
        cin>>n;
        int yes=0;
        vector<int> v(n);
        
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]!=v[0]) yes =1;


        }
        int sum=0;
        if(yes==0) cout<<"NO"<<endl;
        
        else{
            for(int i=0;i<n-1;i++){
                int j=i;
                while(j>=0 && sum==v[j]){
                    int temp=v[j+1];
                    v[j+1]=v[j];
                    v[j]=temp;
                    j--;
                    
                }
                sum=sum+v[i];
            }
           
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
            


        }
    }
    return 0;
}



        
        
       
        
