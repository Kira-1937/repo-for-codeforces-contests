
#include<bits/stdc++.h>
using namespace std;
int main(){
int m,s;
cin>>m>>s;
if(s==0){
    if(m==1){
        cout<<0<<" "<<0<<endl;
    }
    else{
       cout<<-1<<" "<<-1<<endl;
    }
}
else{int k=s;
int digit=0;
while(k>0){
    digit++;
    k=k/10;
}
if(digit>m){
    cout<<-1<<" "<<-1<<endl;
}
else{
if(s<10){

 if(m>1){   cout<<1;
for(int i=0;i<m-2;i++){
    cout<<0;
}
cout<<s-1;
cout<<" ";
    cout<<s;
for(int i=1;i<m;i++){
    cout<<0;
}}
else{
    cout<<s<<" "<<s;
}
}

else{if(m*9<s){
    cout<<-1<<" "<<-1;
    }
else{int rem=s%9;
int q=s/9;
bool temp=false;
if(m-q-2>=0){
    cout<<1;
    }
    else if(rem!=0){
        cout<<rem;
    }
    
for(int i=0;i<m-q-2;i++){
    cout<<0;
}

if(m-q-2>=0){
   if(rem-1<0){
    cout<<0<<8;
    q--;
    temp=true;

   }
   else{
    cout<<rem-1;
   }
    }

    
for(int i=0;i<q;i++){
    cout<<9;
}

cout<<" ";
if(temp){
    q++;
}
//greater print
for(int i=0;i<q;i++){
    cout<<9;
}
if(m-q-1>=0 ){cout<<rem;}
for(int i=0;i<m-q-1;i++){
    cout<<0;
}


}
}








}



}


    
    
    return 0;
}