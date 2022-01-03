
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n ;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int h=1;
if(arr[0]==1){
    h++;
}
for(int i=1;i<n;i++){
if((arr[i]==1)&&(arr[i-1]==0)){
    h++;
}
else if((arr[i]==0)&&(arr[i-1]==0)){
    h=0;
    h--;
    break;
}
else if((arr[i]==1)&&(arr[i-1]==1)){
    h=h+5;
}

}

cout<<h<<"\n";

}

    
    
    return 0;
}