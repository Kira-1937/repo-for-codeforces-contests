
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
int sum1,sum2;
sum1=n;
sum2=n;
string s1,s2,s;
s1="1";
s2="2";


for(int i=1;;i++){
    
   if(i%2==0)
   {   if(sum1-1==0){
       break;
   }
       s=s+s1;

   }
    else{
        s=s+s2;
    }



}






}
    return 0;
}