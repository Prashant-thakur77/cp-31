#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
   long long n,k;
   cin>>n>>k;
   vector<long long> a(n);
   vector<long long> b(n);
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   for(int i=0;i<n;i++){
    cin>>b[i];
   }
   long long min_sum=INT_MAX;
   int ind1=-1;
   int ind2=-1;
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){

    
      priority_queue<int> pq;
      pq.push(a[i]);
      pq.push(a[j]);
      pq.push(b[i]);
      pq.push(b[j]);
      long long maxi1=pq.top();
      pq.pop();
      long long maxi2=pq.top();
      pq.pop();
      long long mini2=pq.top();
      pq.pop();
      long long mini1=pq.top();
      
      long long sum=abs(maxi1+maxi2-(mini2+mini1));
      if(sum<min_sum){
        min_sum=min(min_sum,sum);
        ind1=i;
        ind2=j;
      }
    }
   }
   int flag=1;
   long long val=0;
   for(int i=0;i<n;i++){
    if((i==ind1 || i==ind2)){
      if(flag==1){
        flag=0;
        val+=min_sum;

      }
     
      continue;

    }
    val+=abs(a[i]-b[i]);

   }
   cout<<val<<endl;



  }
  return 0;

}