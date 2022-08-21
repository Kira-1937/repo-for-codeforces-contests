
#include<bits/stdc++.h>
using namespace std;
int main(){
int  t ;
cin>>t;
while(t--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
if(a==0||c==0){
if(a==0&&c==0){
    cout<<0<<endl;
}
else {
    cout<<1<<endl;
}



}



   else{
    
        bool temp=true;
        if(max(a,c)==c){
            temp=true;
        }
        else{
            temp=false;
        }
    int k=max(a,c)/min(a,c);
    int j;
    if(temp==true){
        j=d/b;
    }
    else{
        j=b/d;
    }

  if(temp==true)
  {
    if(k==j){
        cout<<0<<endl;
    }

    else if(k!=j&&b==d){
        cout<<1<<endl;
    }
    else if(k!=j&&a==c){
        cout<<1<<endl;
    }

    else{
       if(__gcd(a,b)==1&&__gcd(c,d)==1&&__gcd(b,d)==1&&__gcd(a,c)==1){
        cout<<2<<endl;
       }
       else{
        cout<<1<<endl;
       }
    }





  }
   else{

    if(k==j){
        cout<<0<<endl;
       
    }

    else if(k!=j&&b==d){
        cout<<1<<endl;
    }
    else if(k!=j&&a==c){
        cout<<1<<endl;
    }

    else{
       if(__gcd(a,b)==1&&__gcd(c,d)==1&&__gcd(b,d)==1&&__gcd(a,c)==1){
        cout<<2<<endl;
       }
       else{
        cout<<1<<endl;
       } 
        
    }


   }



    }

    
}



    
    
    return 0;
}