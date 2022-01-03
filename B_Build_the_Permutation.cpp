
#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
for(int i=0;i<t;i++){
int n,a,b;
cin>>n>>a>>b;
if((n)<(a+b+2)){
    cout<<-1;
}
else if((a==0)&&(b==0)){
    for(int i=0;i<n;i++){
        cout<<i+1<<" ";
    }
}

else{

  int arr[n] ;
  for(int i=0;i<n;i++){
      arr[i]=i+1;
  }
  if(((a-b)>1)&&(a-b)<-1){
      cout<<-1;
  }
  int j=a+b+2;
  if(a>=b){
      int k=n-j;
      for(int i=k;i<n;i+2){
          int temp1=arr[i];
      arr[i]=arr[i+1];
      arr[i+1]=temp1;
      }
  }
 else if(a<b){
      int k=n-j;
      for(int i=0;i<n-k;i+2){
          int temp1=arr[i];
      arr[i]=arr[i+1];
      arr[i+1]=temp1;
      }
  }
for(int k=0;k<n;k++){
    cout<<arr[i]<<" ";
}
}

}
    
    
    return 0;
}