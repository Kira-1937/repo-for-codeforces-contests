
#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){
    int n ,q;
    cin>>n>>q;
   vector <long long >v;
   //int p1=1e5;
   long long  dp[n+1];
   //dp[0]=0;
   for(int i=0;i<n+1;i++){
    dp[i]=0;
   }
 


   int winner=0;
   int winner_index=0;
   for(int i=0;i<n;i++){
    long long x;
    cin>>x;
    v.push_back(x);
   if(i!=0){
     
    if(v[i]>winner){
        dp[i+1]++;
        winner=v[i];
        winner_index=i+1;
    }
    else{
        dp[winner_index]++;
        
    }
   }
   else{
    winner=v[0];
    winner_index=1;
    
   }

   }

//    for(int i=0; i<n+1; i++){
//     cout<<dp[i]<<endl;
//    }


//cout<<winner<<" "<<winner_index<<endl;


   while(q>0){
    long long p,r;
    cin>>p>>r;
    
    if(n>2){
        if(r>n-1) {
        if(p!=winner_index){
            cout<<dp[p]<<endl;
        }
        else{
            long long ans =r-n+1+dp[winner_index];
            cout<<ans<<endl;
        }
    }
    else{
        int not_winner=winner_index-2;
       if(not_winner>0){
        cout<<dp[p]-not_winner+r<<endl;
       }
       else{
       cout<<dp[p]<<endl;
       }
    }
    }
    else{
        if(p!=winner_index){
            cout<<0<<endl;
        }
        else{
            cout<<r<<endl;
        }
    }



   q--;}






}
    
    
    return 0;
}