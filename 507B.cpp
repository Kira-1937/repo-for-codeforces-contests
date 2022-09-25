
#include<bits/stdc++.h>
using namespace std;
int main(){
int  r,a,b,x,y;
cin>>r>>a>>b>>x>>y;
long long p=abs(a-x);
long long  q=abs(b-y);
//cout<<p<<" "<<q<<endl;
long long  s=p*p+q*q;
//cout<<s<<endl;

long long z=sqrt(s);
 long long g;
if(z*z==s){
     g=z;
}
else{
   g=z+1;
}
//cout<<g<<" "<<s<<endl;
if(g%(2*r)==0){
    cout<<g/(2*r)<<endl;
}
else{

    
   cout<<g/(2*r)+1<<endl;
}


    
    
    return 0;
}