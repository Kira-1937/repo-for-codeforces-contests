
#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin >> t;
while(t--){

    int m;
    cin>>m;
    int dp[2][m];
    int max=0;
    int num=0;
    int num1=0;
    int ans1,ans2,ans3=0;
    int l,l2;
    for(int i=0; i<2; i++){
        for(int j=0;j<m;j++){
            cin>>dp[i][j];
            if(max<dp[i][j]){
                max=dp[i][j];
                l=i;l2=j;
            }
          
    }}


 for(int i=0; i<2; i++){
        for(int j=0;j<m;j++){
           if(max==dp[i][j]){
            num1++;
           }
          
    }}




    if(l==0){

        ans1=max+l2-1;
    }
    else{
    ans1=max+l2;
    }
    if(ans1<max+num1){
        ans1=max+num1;
    }
   
   int v[2*m];
//    for(int  i=0;i<2*m;i++){
//     v[i]=0;
//    }
   for(int i=0;i<m;i++){
  if(i%2==0) {
    v[2*i]=dp[num][i];
   v[2*i+1]=dp[num+1][i];
  
  }
  else{
   
    v[2*i]=dp[num+1][i];
   v[2*i+1]=dp[num][i];
 
  }
   }
 for(int i=1;i<2*m;i++){
    if(ans3<v[i]){
        ans3=v[i]+1;
    }
    else{
        ans3++;
    }
  }
  
   ans2=min(ans1,ans3);
   if(ans2<2*m-1){
    ans2=2*m-1;
   }

cout<<ans2<<endl;


    






}
    
    
    return 0;
}