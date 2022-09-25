
#include<bits/stdc++.h>
using namespace std;
int main(){

int n ;
cin>>n;
vector<int>v;
int max=0;
int index=0;
for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    v.push_back(x);
    if(max<=x){
        max=x;
        index=i;
    }
}  
bool temp=true;
if(index!=n-1){for(int i=0;i<n;i++){

    if(i<index){
     if(v[i]>v[i+1]){
         temp=false;
         break;
     }
    }
    else if(i==index){
    i++;
    }
    else{
        if(v[i]<v[i-1]){
            temp=false;
        }
    }
}}
else {
    for(int i=2;i<n;i++){
     if(v[i]<v[i-1]){
        temp=false;
        break;
     }
    }
}
//cout<<temp<<" "<<index;

if(temp&&v[n-1]<=v[0]&&n>2){
    if(index==n-1){
        if(v[0]==v[1]){
            cout<<
        }
        else{cout<<n-1<<endl;}

    }
    
    else {cout<<n-index-1<<endl;}
}
else if(n==2){
if(v[0]<=v[1]){
    cout<<0<<endl;
}
else{
   cout<<1<<endl;
}



}
else{
    cout<<-1<<endl;
}

    
    return 0;
}