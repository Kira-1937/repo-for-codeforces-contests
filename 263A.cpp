
#include<bits/stdc++.h>
using namespace std;
int main(){

int arr[5][5];
int indexi,indexj;
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cin>>arr[i][j];
        if(arr[i][j]==1){
            indexi=i+1;
            indexj=j+1;
        }
    }
}
cout<<abs(3-indexi)+abs(3-indexj)<<endl;
    
    
    return 0;
}