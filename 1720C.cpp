
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int m,n;
cin>>m>>n;
int sum=0;
int arr[m][n];
bool temp=false;
for(int i=0;i<m;i++){
    string s;
    cin>>s;

    for(int j=0;j<n;j++)   {
        arr[i][j]=s[j]-'0';

       sum=sum+arr[i][j];
       // cout<<sum<<endl;
        if(i!=0){
          if(j!=0){
            if((arr[i][j]==arr[i][j-1]&&arr[i][j]==0)||(arr[i][j]==arr[i-1][j]&&arr[i][j]==0||(arr[i][j]==arr[i-1][j-1]&&arr[i][j]==0)||(arr[i][j]==arr[i-1][j+1]&&arr[i][j]==0))){


            temp=true;
           


          }
          }
           if(j==0){
            if(arr[i][j]==arr[i-1][j]&&arr[i][j]==0||(arr[i][j]==arr[i-1][j-1]&&arr[i][j]==0)||(arr[i][j]==arr[i-1][j+1]&&arr[i][j]==0)){
                temp=true;
            }


           }


        }
        else{
          if(j!=0) { 
            if(arr[i][j-1]==arr[i][j]&&arr[i][j]==0){
            temp=true;
          }
          }
        }
}
}

if(sum==0){
        cout<<sum<<endl;
        //cout<<"p";
    }
    else if(temp==true&&sum!=0) {
        cout<<sum<<endl;
         //cout<<"p";
    }
    else if(sum==m*n){
        cout<<sum-2<<endl;
    }
    else{
        cout<<sum-1<<endl;
        //cout<<"p";
    }


}

    
    
    return 0;
}