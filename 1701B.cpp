
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
       int dp[n+1];
       dp[0]=0;
       dp[1]=0;
       for(int i=2;i<n+1;i++){
        if(dp[i-1]==dp[i-2]){
            dp[i]=dp[i-1]+1;
        }
        else{ 
            dp[i]=dp[i-1];
        }
       }

    




       

    }


    
    
    return 0;
}