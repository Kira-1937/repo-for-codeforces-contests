
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
  int n ;
  cin>>n;

   if(n==1){
    cout<<1<<endl;
   }
   
   else if(n==2){
    cout<<2<<" "<<1<<endl;
   }

   else if(n==3){
    cout<<2<<" "<<3<<" "<<1<<endl;

   }
 else{

 
  int dp[n];
  dp[0]=2;
  dp[1]=1;
  dp[n-1]=3;
  for(int i=2;i<n-1;i++)
{
    dp[i]=i+2;
}

for(int  i=0;i<n;i++){
    cout<<dp[i]<<" ";
}
 

cout<<endl;}

}

    
    
    return 0;
}