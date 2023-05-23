#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
t=1;

while(t--){
long long n ,x;
cin>>n>>x;
if(n%2==0){
    if(x<=n/2){
        cout<<2*x-1;
    }
    else{
        x=x-n/2;
        cout<<2*x;
    }
}

else{
    if(x<=n/2+1){
        cout<<2*x-1;
    }
    else{
        x=x-n/2-1;
        cout<<2*x;
    }
}


}
return 0;
}