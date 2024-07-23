#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    

    while (t--){
        int q;
        char t='X';
        q=0;

        vector<char> v(100);
        for(int i=0;i<100;i++){
            cin>>v[i];
            if((i>=0 && i<10)||(i>=90 && i<100)) {
                if(v[i]==t) q=q+1;
            } 

     
            else if((i>=11 && i<19)||(i>=81 && i<89)||(i==21)||(i==31)||(i==41)||(i==51)||(i==61)||(i==71)||(i==28)||(i==38)||(i==48)||(i==58)||(i==68)||(i==78)) {
                if(v[i]==t)q=q+2;
            } 
            else if((i>=22 && i<28)||(i>=72 && i<78)||(i==32)||(i==42)||(i==52)||(i==62)||(i==37)||(i==47)||(i==57)||(i==67)) {
                if(v[i]==t) q=q+3;
            } 
            else if((i>=33 && i<37)||(i>=63 && i<67)||(i==43)||(i==53)||(i==46)||(i==56)) {
                if(v[i]==t) q=q+4;
            } 
            else if((i>=44 && i<46)||(i>=54 && i<56)) {
                if(v[i]==t) q=q+5;
            } 
            else {
                if(v[i]==t) q=q+1;
            }
        }
        cout<<q<<endl;

            



            
            


            
    
        
            
        

    }
    return 0;
}