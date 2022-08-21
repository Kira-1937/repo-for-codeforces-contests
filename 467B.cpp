
#include<bits/stdc++.h>
using namespace std;
int main(){

int n,m,k;
cin>>n>>m>>k;
int arr[m+1];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int ans =0;
 int z;
 int p;
for(int i=0;i<m;i++)
{  
    z=arr[m]^arr[i];
    
    p=int (log2(z));
    cout<<z<<" "<<p<<endl;
    if(p<=k){
        
ans++;
    }
} 
cout<<ans;   
    
    return 0;
}