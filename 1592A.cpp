
#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){
int n,h;
cin>>n>>h;
vector<int>v;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
}
sort(v.begin(),v.end());
int k=v[n-1]+v[n-2];
int j=h%k;
int p=h/k;
if(j==0){
    cout<<2*p<<endl;
}
else if(j<=v[n-1]){
    cout<<2*p+1<<endl;
}
else{
    cout<<2*p+2<<endl;
}
}
    
    
    return 0;}