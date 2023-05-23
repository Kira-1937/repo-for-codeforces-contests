#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
t=1;

while(t--){
int a ,b,c,d;
cin>>a>>b>>c>>d;

if(abs(d-c)==abs(b-a)){
  
    cout<<a<<" "<<d<<" "<<c<<" "<<b;
}
else if(d-b==0&&c-a!=0){
   
    cout<<a<<" "<<b-a+c<<" "<<c<<" "<<d+c-a;
}
else if(c-a==0&&d-b!=0){
   
    cout<<a+d-b<<" "<<b<<" "<<a+d-b<<" "<<d<<endl;
}
else{
    cout<<-1<<endl;
}

}
return 0;
}