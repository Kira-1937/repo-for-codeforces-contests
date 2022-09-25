
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int m,n,x,y,d;
    cin>>m>>n>>x>>y>>d;
if((x-d)<=1&&(x+d)>=m){
    cout<<-1<<endl;
}
else if((y-d)<=1&&(y+d)>=n){
    cout<<-1<<endl;
}
else if((x+d)>=m&&(y+d)>=n){
    cout<<-1<<endl;
}
else if((x-d)<=1&&(y-d)<=1){
cout<<-1<<endl;
}
else{
    cout<<m+n-2<<endl;
}



}

    
    
    return 0;
}