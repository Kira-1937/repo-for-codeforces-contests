
#include<bits/stdc++.h>
using namespace std;
int check(int**input,int n,int m,int s){
    int min=input[0][0];
    int key1=0;
    int max=input[0][1];
    int key2=0;
for(int i=1;i<s;i++){
if(min>input[i][0]){
    min=input[i][0];
    key1=i;
}
else if(min==input[i][0]){
    if(input[i][2] <input[key1][2] ){
      key1=i;
    }

}



//for maximus
if(max<input[i][1]){
    max=input[i][1];
    key2=i;
}
else if(max==input[i][1]){
    if(input[i][2] <input[key2][2] ){
      key2=i;
    }
    
}


}

if(key1==key2){
   return  input[key1][2];
}
else if(input[key1][0]==input[key2][0]){
     return  input[key2][2];
}
else if(input[key1][1]==input[key2][1]){
     return  input[key1][2];
}
else{
    return input[key1][2]+input[key2][2];
}




}
int main(){
int t;
cin>>t;
while(t--){
int n ;
cin>>n;
int** input=new int *[n];
for(int i=0;i<n;i++)
{
    input[i]=new int [3];
    for(int j=0;j<3;j++){
        cin>>input[i][j];
    }
}
for(int  i=0;i<n;){
    cout<<check(input,n,3,i+1)<<"\n";
    i++;
}




}   
    return 0;
}