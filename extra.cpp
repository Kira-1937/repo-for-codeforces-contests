#include<bits/stdc++.h>
using namespace std;
int main(){
  int n ;
  cin>>n;
  int dp[n+1];
  dp[0]=0;
  dp[1]=0;
  dp[2]=0;
  dp[3]=1;
  dp[4]=2;
  dp[5]=2;
  int p=0;
  for(int i=6;i<n+1;){
    if(p==0){
        dp[i]=dp[i-1]+1;
        dp[i+1]=dp[i-1]+1;
        i=i+2;
        p=1;
    }
    else{
       dp[i]=dp[i-1]+1;
        dp[i+1]=dp[i-1]+1;
        dp[i+2]=dp[i-1]+1;
        dp[i+3]=dp[i-1]+1;
        i=i+4;
        p=0;
    }
  }

cout<<dp[n]<<endl;



    return 0;
}