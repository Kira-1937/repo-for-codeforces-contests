
#include<bits/stdc++.h>
using namespace std;
int main(){


    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int x,y,p,q;
        cin>>x>>y>>p>>q;
        int r=x+(10*(p));
        int s=y+(10*(q));
        if(r>s){
            cout<<"Chefina";
        }
        else if(s>r){
            cout<<"Chef";
        }
        else{
            cout<<"Draw";
        }
    }
    
    return 0;
}