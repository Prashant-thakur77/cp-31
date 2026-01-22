#include<bits/stdc++.h>
using namespace std;

int main(){
    string n="1011101";
    int len=n.size();
    int j=0,ans=0;
    for(int i=len-1;i>=0;i--){
        ans+=(n[i]-'0')*pow(2,j);
        j++;
    }

    string ans2="";
    string n2=n;
    while(n2.size()%4!=0) n2='0'+n2;

    for(int i=0;i<n2.size();i+=4){
        int sum=0;
        sum+=(n2[i+3]-'0')*8;
        sum+=(n2[i+2]-'0')*4;
        sum+=(n2[i+1]-'0')*2;
        sum+=(n2[i]-'0')*1;

        if(sum<10) ans2=char('0'+sum)+ans2;
        else ans2=char('A'+(sum-10))+ans2;
    }

    cout<<"Binary: "<<n<<endl;
    cout<<"Decimal: "<<ans<<endl;
    cout<<"Hexadecimal: "<<ans2<<endl<<endl;

    int k=255;
    string res="";
    while(k>0){
        res=to_string(k%2)+res;
        k/=2;
    }

    cout<<"Decimal :"<<255<<endl;
    cout<<"Binary :"<<res<<endl<<endl;

    string hex="1A3F";
    string b1="",d1="";
    for(char c:hex){
        int val=(c>='0'&&c<='9')?c-'0':c-'A'+10;
        d1+=to_string(val);

        string temp="";
        while(val>0){
            temp=to_string(val%2)+temp;
            val/=2;
        }
        while(temp.size()<4) temp='0'+temp;
        b1+=temp;
    }

    cout<<"Hexadecimal :"<<hex<<endl;
    cout<<"Binary :"<<b1<<endl;
    cout<<"Decimal :"<<d1<<endl<<endl;

    int t=-255;
    string res2="";
    bool flag=false;

    if(t<0){
        flag=true;
        t=-t;
    }

    while(t>0){
        res2=to_string(t%2)+res2;
        t/=2;
    }

    res2=(flag?"1":"0")+res2;

    cout<<"Decimal :"<<-255<<endl;
    cout<<"Signed Binary :"<<res2<<endl<<endl;

    return 0;
}
