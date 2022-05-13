
#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){
    int x,y;
    cin>>x>>y;
    int z=(x*x)+(y*y);
    int w=sqrt(z);
    w=w*w;

    if(x==0&&y==0){
        cout<<0<<endl;
    }
    else if(z==w)
    {
        cout<<1<<endl;
    }
    else{
        cout<<2<<endl;
    }

}
    
    
    return 0;
}