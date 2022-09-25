
#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
vector<int >v;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
}
sort(v.begin(),v.end());
int sum[n];
sum[0]=v[0];
for(int i=1;i<n;i++){
    sum[i]=v[i]+sum[i-1];
}


int ans =1;
for(int i=n-2;i>=0;i--){
    if(sum[n-1]-sum[i]>sum[i]){
        break;
    }
    else{
ans++;
    }
}
   cout<<ans<<endl; 
    
    return 0;
}