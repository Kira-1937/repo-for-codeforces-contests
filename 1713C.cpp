
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;




while(t--){
    int n ;
    cin>>n;
   int dp[n];
   dp[0]=0;
   for(int i=1;i<n;i++){
    dp[i]=i;
   }
   for(int i=n-1;i>=0;i--){
    int k=2*i;
    int k2=sqrt(k);
    if(k2*k2==k){
       
    }
   else{ 
    int k1=sqrt(i);
    if(i!=1){
        k1++;
    }
    int k3=k1*k1-i;

    if(dp[i]==i){
    dp[k3]=i;
    dp[i]=k3;
    }
    }
   }
   for(int i=0; i<n;i++){
    cout<<dp[i]<<" ";
   }
   cout<<endl;

}

    
    
    return 0;
}