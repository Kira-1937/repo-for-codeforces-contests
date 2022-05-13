
#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
while(t--)
{
int n ;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

     int k=log2(n);
    float j=log2(n);
    if(k==j){
        cout<<1+k;
    }
    else{
        cout<<2+k;
    }
   cout<<endl;
//////
}
    
    
    return 0;
}