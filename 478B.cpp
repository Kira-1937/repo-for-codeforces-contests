
#include<bits/stdc++.h>
using namespace std;
int main(){
long long  n,m;
cin>>n>>m;

long long  k=n/m;
long long j=n-k*m;
long long l=m-j;
long long ans =(((j)*(k+1)*(k)))/2+((l)*(k)*(k-1))/2;

long long ans2=((n-m+1)*(n-m))/2;

// if(m==1){
//     cout<<ans
// }
cout<<ans<<" "<<ans2;



    
    
    return 0;
}