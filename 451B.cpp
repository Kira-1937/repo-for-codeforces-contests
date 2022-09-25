
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<long long >v;
for(int i=0;i<n;i++){
    long long x;
    cin>>x;
    v.push_back(x);
}
if(n==1){
    cout<<"yes"<<endl;
    cout<<1<<" "<<1;
}
if(n==2){
    if(v[0]>v[1]){
        cout<<"yes"<<endl;
        cout<<1<<" "<<2<<endl;
    }
    else{
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
    }
}
long long change=0,changes=0;
long long p=0;
long long q=0;
long long r=0;
long long s=0;
bool temp=false;
if(n>2)
{for(int i=1;i<n;i++){
  if(v[i]<v[i-1]){
    if(changes==2){
        cout<<"no"<<endl;
         temp=true;
         break;
    }
    if(change==0){
     r=i-1;
     s=v[i-1];
    }
    change=1;
    p=i;
    q=v[i];

  }
  else{
    if(change==1)
   { changes=2;}
  }

}
if(change==0&&temp==false){
if(v[0]<=v[1]){
    cout<<"yes"<<endl;
    cout<<1<<" "<<1<<endl;
}
else{
    cout<<"no"<<endl;
}
}
if(change==1&&temp==false){
    if(r==0&&p==n-1){
     cout<<"yes"<<endl;
     cout<<r+1<<" "<<p+1<<endl;
    }
    else if(r==0&&p!=n-1){
        if(v[0]<=v[p+1]){
            cout<<"yes"<<endl;
            cout<<1<<" "<<p+1<<endl;
        }
        else{
            cout<<"no"<<endl;
        }

    }
    else if(r!=0&&p==n-1){
        if(v[n-1]>v[r-1]){
            cout<<"yes"<<endl;
            cout<<r+1<<" "<<p+1<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    else{
        if(v[r-1]<v[p]&&v[r]<v[p+1]){
            cout<<"yes"<<endl;
            cout<<r+1<<" "<<p+1<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    }
//     cout<<p<<q<<r<<s<<endl;
// cout<<change<<endl;
// cout<<changes<<endl;

}




    
    
    return 0;
}