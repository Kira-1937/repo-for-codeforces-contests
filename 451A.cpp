#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
t=1;
while(t--){
int n ,m;
cin>>n>>m;
long long k=min(n,m);
if(k%2==0){
    cout<<"Malvika"<<endl;
}
else {
    cout<<"Akshat"<<endl;
}

}
return 0;
}