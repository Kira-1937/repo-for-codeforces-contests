using namespace std;
#include<iostream>

int main(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d,m;
    cin>>d>>m;
   int j=n-m+1;
   int ar[j];

   for(int k=0;k<j;k++){
       ar[k]=0;
       for(int p=k;p<m+k;p++){
           ar[k]=ar[k]+arr[p];
       }

   }
    int ans=0;
    for(int i=0;i<j;i++)
{
    if(ar[i]==d){
        ans++;
    }
}
cout<<"ans"<<"="<<ans;


    return 0;
}
