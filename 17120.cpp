
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;

cin>>t;
while(t--){
    int n ,k;
    cin>>n>>k;
    vector <int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

int ans=0;
for(int i=0;i<k;i++){
    if(v[i]>k){
        ans++;
    }
}


cout<<ans<<endl;
}

    
    
    return 0;
}