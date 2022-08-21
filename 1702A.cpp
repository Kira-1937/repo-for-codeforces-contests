
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--) {
    int n ;
    cin>>n;
    long long temp=1;
    for(int a=0;a<11;a++ ){
        if(temp>n){
            cout<<n-temp/10<<endl;
            break;
        }
        else{
            temp=temp*10;
        }
    }
}

    
    
    return 0;
}