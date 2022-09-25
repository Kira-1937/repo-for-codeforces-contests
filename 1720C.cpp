
#include<bits/stdc++.h>
using namespace std;
int main(){
int t ;
cin>>t;while(t--){
    int n ,m;
    cin>>n>>m;
    int ans=0;
  int arr[n][m];
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        for(int j=0;j<m;j++)
{
      arr[i][j]=s[i]-'0';
      ans=ans+arr[i][j];
} 
}
bool temp=false;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
   if(arr[i][j]==0&&arr[i-1][j]==0){
    temp=true;
    break;
   }
   else if(arr[i][j]==0&&arr[i][j-1]==0){
    temp=true;
    break;
   }
   else if(arr[i][j]==0&&arr[i-1][j-1]==0)
{   
    temp=true;
    break;
}   

else if(arr[i][j]==0&&arr[i-1][j+1]==0){
    temp=true;
    break;
} 
}
}
cout<<temp<<endl;
cout<<ans<<endl;
// if(temp){
// cout<<ans<<endl;
// }
// else{
//     if(ans==n*m){
//         cout<<ans-2<<endl;
//     }
//     else{
//         cout<<ans-1<<endl;
//     }
// }






}

    
    
    return 0;
}