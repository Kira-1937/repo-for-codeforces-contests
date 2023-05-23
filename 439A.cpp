#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
t=1;
while(t--){
int n,d;
cin>>n>>d;
int arr[n];
int sum=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    sum=sum+arr[i];
}
if(sum+(n-1)*10>d){
    cout<<-1<<endl;
}
else{
    cout<<(d-sum)/5<<endl;
}

}
return 0;
}