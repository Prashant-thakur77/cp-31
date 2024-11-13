#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x,y,z;
	cin>>x>>y>>z;
	if(z<=x+y){
	    cout<<2*z+y<<endl;
	}
	else{
	    cout<<2*(x+y)+y<<endl;
	}

}
