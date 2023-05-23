#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
long long  d ,a,b;
d=1;
a=0;
long long k=1;
for(int i=0;i<=n-2;i+2){
     
     
    a=a+k;
    a=a%998244353;
    k=k*4;
     k=k%998244353;
}
a=a+k;
 a=a%998244353;



}
return 0;
}