#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;
long long modExp(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}




     
      

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,d;
	    cin>>n>>d;
	    vector<int> v(n);
	    int fact=0;
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    for(int i=d;i>0;i--){
	        fact=fact+i;
	       
	    }
	    long long q=d*d;
	    long long Q_inverse = modExp(q, MOD - 2, MOD);

    
       long long result = (fact * Q_inverse) % MOD;
       cout<<result<<endl;

	    
	}

}
