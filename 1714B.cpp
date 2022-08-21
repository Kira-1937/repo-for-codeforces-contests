
#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
 set<int>s;
 int size = 0;
 for(int i=n-1; i>=0; i--){
  s.insert(arr[i]);
  size++;
  if(size!=s.size()){
    break;
  }
   
}
if(size!=s.size()){
    size--;
}
cout<<n-size<<endl;
}

    
    
    return 0;
}