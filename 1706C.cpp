
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n ;
    cin>>n;
    vector <int >v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
      int ans=0;
   int dp[n-2];
   for(int i=1;i<n-1;i++){
    int k1=-v[i-1]+v[i];
    int k2=-v[i+1]+v[i];
    dp[i-1]=min(k1,k2);
   }
   int n1=0;
   for(int i=0;i<n-2;i++){
    if(dp[i]>0){
        dp[i-1]=INT_MIN;
        dp[i+1]=INT_MIN;
        dp[i]=INT_MIN;
        n1++;
    }
   }

   int n2=0;
   if(n%2==0){
    n2=n/2-1;
   }
   else{
    n2=n/2;
   }

if(n1>=n2){
    cout<<ans<<endl;
}
else{
   int  k=n2-n1;
    sort(dp,dp+n-2);
  
   for(int i=n-3;i>n-3-k;i--){
   ans=ans-dp[i]+1;
   }

   cout<<ans<<endl;
}







}

    
    
    return 0;
}