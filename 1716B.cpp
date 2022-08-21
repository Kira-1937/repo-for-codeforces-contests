
#include<bits/stdc++.h>
using namespace std;
int main(){

int t ;
cin>>t;
while(t--){
    int n ;
    cin>>n;

   int arr[n];
   for(int i=0;i<n;i++){
    arr[i]=i+1;
   }

   cout<<n<<endl;
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
  cout<<endl;

   for(int i=0;i<n-1;i++){
    swap(arr[n-1-i],arr[n-1-i-1]);
   
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
  cout<<endl;

   }



}
    
    
    return 0;
}