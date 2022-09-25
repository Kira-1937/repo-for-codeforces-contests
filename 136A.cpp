
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
map<int,int>mp;
for(int i=1;i<=n;i++){
    int x;
    cin>>x;
    mp.insert({x,i});
} 
for(auto &it:mp){
    cout<<it.second<<" ";
}

    
    
    return 0;
}