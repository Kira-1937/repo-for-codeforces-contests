
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
for(int i=0;i<t;i++){
    int n ;
    cin>>n;
    int arr[n];
  for(int i=0;i<n;i++){
      arr[i]=i+2;
  }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
    
    
    return 0;
}