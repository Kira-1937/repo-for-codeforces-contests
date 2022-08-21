
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
   string s[8][8];
   
   for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
     cin>>s[i][j];
     
     }
    }
int x1,y1,x2,y2;
for(int i=1;i<7;i++)
{int max=0;
    for(int j=1;j<7;j++){
      if(s[i][j]=="#"){
        max++;
        x1=i+1;
        y1=j+1;
      }     
    }

    if(max==1){
       x2=x1;
       y2=y1; 
    }
}
cout<<x2<<" "<<y2<<endl;





   }



    
    
    return 0;
}