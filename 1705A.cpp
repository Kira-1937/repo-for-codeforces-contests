
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
 int x;
 cin>>n>>x;
 vector <int>v;
 for(int  i=0;i<2*n;i++){
    int y;
    cin>>y;
    v.push_back(y);
 }
int z=0;
sort(v.begin(),v.end());
for(int i=0;i<n;i++){
    if(v[n+i]-v[i]>=x){
    
    }
    else{
        z++;
        cout<<"no"<<endl;
        break;
    }
}
if(z==0)
cout<<"yes"<<endl;


}

    
    
    return 0;
}