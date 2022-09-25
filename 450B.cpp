
#include<bits/stdc++.h>
using namespace std;
int main(){
long long x,y,n;
cin>>x>>y>>n;
long long dp[6];
dp[0]=x;
dp[1]=y;
dp[2]=y-x;
dp[3]=-x;
dp[4]=-y;
dp[5]=-y+x;
long long k=n%6;
if(n<=2){
    if(dp[n]<0){
    cout<<dp[n]+1000000000+7<<endl;
}
else{
    cout<<dp[n]<<endl;
}
}
else{if(dp[k-1]<0){
    cout<<dp[k-1]+1000000000+7<<endl;
}
else{
    cout<<dp[k-1]<<endl;
}
}
    
    
    return 0;
}