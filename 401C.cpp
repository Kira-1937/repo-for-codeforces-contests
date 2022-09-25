
#include<bits/stdc++.h>
using namespace std;
int main(){
int  n,m;
cin>>n>>m;
int q=m-n;
if(m>2*n+2){
    cout<<-1<<endl;
}
else if(n>m+1){
    cout<<-1<<endl;
}
else if(n==m){
    for(int  i=0;i<n;i++){
        cout<<10;
    }
}
else if(n==m+1){
      cout<<0;
    for(int  i=0;i<m;i++){
        cout<<10;
    }
  
}
else{
if(m==2*n+2){
    for(int i=0;i<n;i++){
        cout<<110;
    }
    cout<<11<<endl;
}

else if(m==2*n){
    for(int i=0;i<n;i++){
        cout<<110;
    }
}
else if(m==2*n+1){
    for(int i=0;i<n;i++){
        cout<<110;
    }
    cout<<1<<endl;
}
else{
for(int i=0;i<q;i++){
        cout<<110;
    }
for(int i=0;i<n-q;i++){
        cout<<10;
    }


}


}


    
    
    return 0;
}