#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>v;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
}
vector<int>v1;
bool temp=true;
v1.push_back(v[0]);
for(int i=1;i<n;i++){
if(v1[i-1]-v[i]>=0&&v[i]!=0){
    temp=false;
    cout<<-1<<endl;
    break;
}
else {
    int k=v1[i-1]+v[i];
    
    v1.push_back(k);
}
}
if(temp){
    for(int i=0;i<n;i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
}



}
return 0;
}