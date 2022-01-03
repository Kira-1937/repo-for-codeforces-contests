
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    int a,b,c;
    if((n%2)==0){ 
    a=1;
    b=(n-1)/2;
    c=n-1-b;
    cout<<b<<" "<<c<<" "<<a<<"\n";
    }
    else{
        int a=1;
        b=(n-1)/2;
           b++;
           c=b-2;
       for(int i=0;;i++){
           
           if(__gcd(b,c)==a){
                cout<<b<<" "<<c<<" "<<a<<"\n";
               break;
           }
         b++;
         c--;

       }
        
        
    }

}

    
    
    return 0;
}