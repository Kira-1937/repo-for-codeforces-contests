using namespace std;
#include<bits/stdc++.h>
int main(){
int a,b,c,d;
cin>>a>>b>>c>>d;
long long  misha=max((3*a)/10,a-(a*c)/250);
long long vasya= max((3*b)/10,b-(b*d)/250);
if(misha>vasya){
    cout<<"Misha"<<endl;
}
else if(vasya>misha){
    cout<<"Vasya"<<endl;
}
else{
    cout<<"Tie"<<endl;
}
return 0;




}