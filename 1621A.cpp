
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n ;
cin>>n;
int k;
cin>>k;
if(n<2*(k)-1){
    cout<<-1<<endl;
}
else{
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
     if(k>0){
       if(i==j&&i%2==0){
           cout<<"R";
           k--;
       }
       else{
           cout<<".";
       }
      


     }
     else{
         cout<<".";
     }



    }
    cout<<endl;
}



}



}

    
    
    return 0;
}