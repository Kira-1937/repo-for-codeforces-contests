#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
t=1;
while(t--){
int n ,m ;
cin>>n>>m;
int k=n/2+n%2;
bool temp=false;
for(int i=k;i<=n;i++)
{
    if(i%m==0){
        temp=true;
        cout<<i<<endl;
        break;
    }
}

if(!temp){
    cout<<-1<<endl;
}

}
return 0;
}