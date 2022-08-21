
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,h,m;
    cin>>n>>h>>m;
    int dp[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>dp[i][j];
        }
    }
    int minm=(dp[0][1]-m+60)%60;
    if(dp[0][1]<m){
            dp[0][0]--;
        }
    int minhour=(dp[0][0]-h+24)%24;


    for(int i=1;i<n;i++){
        int min,hour;

        min=(dp[i][1]-m+60)%60;


        if(dp[i][1]<m){
            dp[i][0]--;
        }

      hour=(dp[i][0]-h+24)%24;

     

     if(minhour>hour){
        minhour=hour;
        minm=min;
     }

      if(minhour==hour&&minm>min) {
        minm=min;
     }
    }
    




    cout<<minhour<<" "<<minm<<endl;





}

    
    
    return 0;
}