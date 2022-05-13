
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while (t--)
{
long long  n;
cin>>n;
long long s;
cin>>s;
long long x;
long long j=n*(n+1);
if(s>0){
    x=s-j+n+1;
    long long k=n*n;
    if(x%k==0){
    x=x/k;
    cout<<x<<endl;
    }
else{
    x=x/k+1;
    cout<<x<<endl;
    }
}
else{
    cout<<0<<endl;
}


}

    
    
    return 0;
    }