
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n ;
cin>>n;
vector <int > v;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
}
sort(v.begin(),v.end());
int r=0;
for(int i=1;i<=n;i++){
    if(v[i]>n){
        r=i;
        break;
    }
    else{
        cout<<0<<"\n";
        break;
    }
}
int j=r;
if(r>0){
    for(int i=r;i<=n;i++){
        if(v[i]%r!=0){
            cout<<(-1)<<"\n";
            break;
        }
        r++;
    }
}
else{
    cout<<(n-j)<<"\n";
}




}

    
    
    return 0;
}