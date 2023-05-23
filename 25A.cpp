#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
t=1;

while(t--){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int  even=0;
int e,o;
for(int i=0;i<n;i++){
    if(arr[i]%2==0){
        e=i+1;
        even++;
    }
    else {
        o=i+1;
    }
}
if(even==n-1){
    cout<<o<<endl;
}
else {
    cout<<e<<endl;
}

}
return 0;
}