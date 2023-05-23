#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
t=1;
while(t--){
int n;
cin>>n;
bool temp=false;
if(n<0){
    temp=true;
    n=n*(-1);

if(n%10>=(n%100-n%10)/10){
    if(temp){
        cout<<((n-n%10)/10)*(-1)<<endl;
    }
}
else{
    cout<<((n-n%100)/10+n%10)*(-1)<<endl;
}}
else{
    cout<<n<<endl;
}

}
return 0;
}