#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,q;
cin>>n>>q;
map<int,int>mp;
mp.insert(1,1);
for(int i=1;i<n;i++){
    int x;
    cin>>x;
    mp.insert({i+1,x});
}
int depth[n];
depth[0]=1;
auto it=mp.begin();
++it;
for(int i=0;i<n;i++)
{
    depth[i]=1+depth[(it->second)-1];
    ++it;
}
for(int i=0;i<n;i++){
    cout<<depth[i]<<endl;
}



}
return 0;
}