
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
   
    int dp[n][m];
    for(int i=0;i<n;i++){
       if(i%2==0) dp[i][0]=0;
       else{ 
        dp[i][0]=1;

       }
    }

    for(int i=0;i<n;i++){
       for(int j=1;i<m;){
        if(j%2==1){
          dp[i][j]=1;
          if(j+1<m)dp[i][j+1]=1;
        }
        else{
             dp[i][j]=0;
          if(j+1<m)dp[i][j+1]=0;
        }
        j=j+2;
       }
    }
 
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<dp[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;


}

    
    
    return 0;
}