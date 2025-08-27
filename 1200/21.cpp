#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code here
    ll n;
    cin>>n;
    string s;
    cin>>s;
    int cnt1=0;
    char x1='1';
    int low=0;
    int high=n-1;
    int flag=0;
    while(low<high){
       /*cout<<cnt1<<endl;
        cout<<high<<" "<<s[high]<<endl;
         cout<<low<<" "<<s[low]<<endl;*/
      if(s[low]==s[high]){
        low++;
        high--;
      }
      else if(s[low]!=s[high] &&(s[low]==x1)){
        low++;
        cnt1++;
        
      }
      else if(s[low]!=s[high] && s[high]==x1){
        high--;
        cnt1++;

      }
      
      else if(s[low]!=s[high] && flag==0){
        x1=s[high];
        high--;
        flag=1;
        cnt1++;
      }
      else{
        cnt1=-1;
        break;
      }
    }
    
    int cnt2=0;
    char x2='1';
    int low1=0;
    int high1=n-1;
    int flag1=0;
    while(low1<high1){
     /*cout<<cnt2<<endl;
        cout<<high1<<" "<<s[high1]<<endl;
         cout<<low1<<" "<<s[low1]<<endl;*/
      if(s[low1]==s[high1]){
        low1++;
        high1--;
      }
      else if(s[low1]!=s[high1] &&(s[low1]==x2)){
        low1++;
        cnt2++;
        
      }
      else if(s[low1]!=s[high1] && s[high1]==x2){
        high1--;
        cnt2++;

      }
      
      else if(s[low1]!=s[high1] && flag1==0){
        x2=s[low1];
        low1++;
        flag1=1;
        cnt2++;
      }
      else{
        cnt2=-1;
        break;
      }
    }
  
    if(cnt1!=-1 && cnt2!=-1){
      cout<<min(cnt1,cnt2)<<endl;
      return;
    }
    if(cnt1!=-1 || cnt2!=-1){
      cout<<max(cnt1,cnt2)<<endl;
      return;

    }
    else cout<<cnt1<<endl;
    return;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}