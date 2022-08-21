
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--) {
    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

if(n%2==0){
   long long  min=arr[0];
   int k=0;
   for(int i=1;i<n;i++){
    if(arr[i]<min){
        min=arr[i];
        k=i;
    }
   }

   k++;
   if(k%2==0){
    cout<<"Mike"<<endl;
   }
   else {
    cout<<"Joe"<<endl;
   }


}
else{
    cout<<"Mike"<<endl;
}




}

    
    
    return 0;
}