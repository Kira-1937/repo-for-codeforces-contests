
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
long long  a,b,c;
cin>>a>>b>>c;
int   d1=c-b;
int  d2=b-a;
int   d3;
if((c-a)%2==0){
    d3=(c-a)/2;
}
else{
    d3=(c-a-1)/2;
    d3++;
}
if(d1==0||d2==0||d3==0){
    if(d1==0&&d2!=0){
     if(b>=a&&b%a==0){
         cout<<"yes\n";
     }
     else if(b<a&&((a-c)/2)%b==0&&(a-c)/2>0){
         cout<<"yes\n";
     }
    else{
        cout<<"no\n";
    }}
if(d2==0&&d1!=0){
     if(b>=c&&b%c==0){
         cout<<"yes\n";
     }
     else if(b<c&&((c-a)/2)%b==0&&(c-a)/2>0){
         cout<<"yes\n";
     }
    else{
        cout<<"no\n";
    }


    }
if(d3==0&&d1!=0&&(c-a)%2+d3!=1){
     if(b>=a&&(b+a)%c==0){
         cout<<"yes\n";
     }
     else if(b<a&&a%b==0){
         cout<<"yes\n";
     }
    else{
        cout<<"no\n";
    }



}

if(d1==0&&d2==0&&d3==0)
{
    cout<<"yes\n";
}

}

else{
    
    if((b+d2)%c==0&&c!=0){
        cout<<"yes\n";
    }
   


   else if((b-d1)%a==0&&a!=0){
    cout<<"yes\n";
}



else if((a+d3)%b==0&&b!=0){
    cout<<"yes\n";
}
else {
    cout<<"no\n";
}

 }


}





    
    return 0;
}