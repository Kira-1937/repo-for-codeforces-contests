#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
t=1;
while(t--){
int n,k;
cin>>n>>k;
vector<int>v;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x+k);

}
sort(v.begin(),v.end());
int ans=0;
for(int i=2;i<n;){
    if(v[i]<=5){
        ans++;
    }
    else {
        break;
    }
    i=i+3;
}


cout<<ans<<endl;



}
return 0;
}