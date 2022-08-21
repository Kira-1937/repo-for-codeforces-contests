
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,q;
cin>>n>>q;
vector <long long >v;
for(int i=0;i<n;i++){
long long z;
cin>>z;
v.push_back(z);


}
sort(v.begin(),v.end());
int ans=0;
long long  dp[q][2];
for(int i=0;i<q;i++){
    for(int  j=0;j<2;j++){
        cin>>dp[i][j];
    }
}

for(int i=1;i<n;i++){
    v[i]=v[i]+v[i-1];
}


for(int i=0;i<q;i++){
    int m=n-dp[i][0]+dp[i][1]-1;
    int p=n-dp[i][0]-1;
    if(p<0){
        cout<<v[m]<<endl;
    }
    else{
        cout<<v[m]-v[p]<<endl;
    }
   
    

    
}



    
    
    return 0;
}