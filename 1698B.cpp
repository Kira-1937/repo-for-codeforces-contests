
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;while(t--){
int n, k;
cin>>n>>k;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int ans=0;
int p=0;
if(k!=1){
for(int i=1;i<n-1;i++){
    if(arr[i]>arr[i-1]+arr[i+1]){ 
        ans++;
    }
}

}

else { 
   
    for(int i=1;i<n-1;i++){
    if(arr[i]>arr[i-1]+arr[i+1]){ 
        ans++;
    }
    else if(arr[i]==arr[i-1]+arr[i+1]){
        p=1;
    }
}
}


if(p==1){
    cout<<ans+1<<endl;
}
else{  
    cout<<ans<<endl;
}


}

    
    
    return 0;
}