
#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
   long long n ,z;
   cin>>n>>z;
   long long dp[n];
   for(int i=0;i<n;i++){
    cin>>dp[i];
   }

   for(int i=0;i<n;i++){
    dp[i]=z|dp[i];
    z=dp[i]&z;

   }
   long long max=0;
   for(int i=0;i<n;i++){
    if(dp[i]>max){
        max=dp[i];
    }
   }
  
   cout<<max<<endl;


    }

    
    
    return 0;
}