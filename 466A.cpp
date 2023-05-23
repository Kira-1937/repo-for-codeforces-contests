#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
t=1;
while(t--){
int n ,m,a,b;
cin>>n>>m>>a>>b;
if(b/m<a){
    int j=n%m;
    int k=n-j;
    k=k/m;
    if(j*a>=b){
        cout<<(k+1)*b<<endl;
    }
    else{
        cout<<b*k+j*a<<endl;
    }
}
else{
    cout<<n*a<<endl;
}

}
return 0;
}