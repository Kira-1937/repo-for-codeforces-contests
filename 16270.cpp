
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int m,n;
cin>>n>>m;
int r,c;
cin>>r>>c;
int k=0;
int h=0;
int l=0;
for(int i=1;i<=n;i++){
for(int j=1;j<=m;j++){
char a;
cin>>a;
if(a=='B'){
    k=1;
}
if((i==r||j==c)&&(a=='B')){
    h=1;
}
if((i==r&&j==c)&&(a=='B')){
    l=1;
}


}




}

if(k==1&&h!=1)
{
    cout<<"2\n";
}
else if((h==1)&&(l!=1)){ 
cout<<"1\n";
}

 else if(l==1){
     cout<<"0\n";
 }  
else if(k!=1){
    cout<<"-1\n";
}



}  
    return 0;
}