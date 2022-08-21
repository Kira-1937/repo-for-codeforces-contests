
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;while(t--){
   int arr[4];
   for(int i=0;i<4;i++){
    cin>>arr[i];
   }
  int ans=0;
   for(int u=0;u<4;u++){
    if(arr[u]==1){
        ans++;
    }
   }
   if(ans==0){
    cout<<0<<endl;
   }
   else if(ans==4){
    cout<<2<<endl;
   }
   else{
    cout<<1<<endl;
   }
    



}

    
    
    return 0;
}