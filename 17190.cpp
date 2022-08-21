
#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;while(t--){
int n ,m;
cin>>n>>m;
int even=0,odd=0;
if(n%2==1){
    even++;
}
else{
odd++;
}
if(m%2==1){
    even++;
}
else{
odd++;
}
if(odd==1){
    cout<<"Burenka\n";
}
else if(odd==2){
    cout<<"Tonya\n";
}
else{
  cout<<"Tonya\n";
}





}
    
    
    return 0;
}