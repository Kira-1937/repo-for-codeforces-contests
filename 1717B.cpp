
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){

    int n ,k,r,c;
    cin>>n>>k>>r>>c;
   char dp[n][n];
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        dp[i][j]='.';
    }}
int p=k;

if(n!=k){for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        p--;
        if(p==0){
         dp[i][j]='x';
            p=k;
            
        }
    }
}}
else{
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       if(i==j){
        dp[i][j]='x';
       }
    }
}
}

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<dp[i][j];
    }
    cout<<endl;
}
int q=0;

for(int i=0;i<n;i++){
   if(dp[i][c-1]=='x'){
    q=i+1;
   }
 
}
cout<<n-q<<endl;
int shift=n-q;
for(int i=shift;i<n;i++){
    for(int j=0;j<n;j++){
cout<<dp[i][j];
    }
    cout<<endl;
}
cout<<"g"<<endl;
for(int i=0;i<shift;i++){
    for(int j=0;j<n;j++){
     cout<<dp[i][j];
    }
    cout<<endl;
}
   



}

    
    
    return 0;
}